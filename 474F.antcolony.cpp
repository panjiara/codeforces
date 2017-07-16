#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define  E cout<<endl;
const int N=800010;
int arr[N],s[N];
 int hcf(int a,int b)
{
    //cout<<"hcf"<<endl;
    while(a>0&&b>0)
    {
        if(a>b)
            a%=b;
        else
            b%=a;
    }
    return a+b;

}
void formation(int low,int high,int pos)
{
   // cout<<low<<" "<<high<<endl;
    if(low==high)
        s[pos]=arr[low];
    else
    {
    int mid=(low+high)>>1;
    formation(low,mid,2*pos+1);
    formation(mid+1,high,2*pos+2);
    s[pos]=hcf(s[2*pos+1],s[2*pos+2]);
}
}
int query(int ql,int qh,int low,int high,int pos)
{
    if(ql<=low&&qh>=high)
        return s[pos];
    if(ql>low||qh<high)
        return 0;
     int mid=(low+high)>>1;
    int u=query(ql,qh,low,mid,(pos<<1)+1);
    int v=query(ql,qh,mid+1,high,(pos<<1)+2);
    return hcf(u,v);


}
pair<int,int> b[N];
int main()
{
    int  n,i,l,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
      b[i]=make_pair(arr[i],i);
    }
     sort(b,b+n);
     //cout<<"h"<<endl;
     formation(0,n-1,0);
     cin>>i;
     while(i--)
     {
         cin>>l>>h;
         int u=query(l-1,h-1,0,n-1,0);
         pair<int,int> p=make_pair(u,l-1);
         int from=(lower_bound(b,b+n,p)-b);
         p=make_pair(u,h);
         int to=(lower_bound(b,b+n,p)-b);
         cout<<(h-l+1)-(to-from)<<endl;

     }
  return 0;
}

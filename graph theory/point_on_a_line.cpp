#include<bits/stdc++.h>
using  namespace std;
int a[100005];
int n,d;
int mod_binary(int l,int r, int s)
{
    cout<<l<<" "<<r<<" "<<s<<endl;
   int mid;
   if(a[r]<=s)
    return r;
   if(a[l]>=s)
    return l;

   while(r-l>1)
   {
       mid=(l+r)/2;
        if(a[mid]==s)
        return mid;
        if(a[mid]>s)
           l=mid;
        else
            r=mid;
    }
   // if(l==r)
        return l;
        //else
            //return l+1;
}
int bin_binary(int i)
{
    int l=0,r=n-1;
    while(l<r&&(i<=r&&i>=l))
    {
        if(a[l]-a[r]>d)
        {
            if(a[l]<0)
                l++;
            else
                r--;
        }
        if(a[l]-a[r]<=d)
            return(r-l);
    }
}
int main()
{
    int i,j,k;
    long long int sum=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n-1;i++)
    {
        int k;
       // cout<<(i-mod_binary(0,i-1,a[i]-d))<< " left"<<endl;
        //cout<<(mod_binary(i+1,n-1,a[i]+d))<<" right"<<endl;
        cout<<bin_binary(i)<<endl;
        sum+=(k*(k-1)*(k-2)/6);
    }
    cout<<endl;
    return 0;
}

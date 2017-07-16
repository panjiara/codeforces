#include<bits/stdc++.h>
using namespace std;
int a[100000],s[8000000];
int dp[10000][10000];
void form(int low,int high,int pos)
{
    if(low==high)
        s[pos]=a[low];
    else
    {
        int mid=(low+high)>>1;
        form(low,mid,2*pos+1);
        form(mid+1,high,2*pos+2);
        s[pos]=min(s[2*pos+1],s[2*pos+2]);

    }
}
int query(int ql,int qh,int low,int high,int pos)
{
    if(qh<low||ql>high)
    {
       return INT_MAX;
    }
    if(ql<=low&&qh>=high)
        return s[pos];
    int mid=(low+high)>>1;
    return min(query(ql,qh,low,mid,2*pos+1),query(ql,qh,mid+1,high,2*pos+2));
}
int main()
{
int n,i;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
int pos;
form(0,n-1,0);
for(i=0;i<n;i++)
{

}

cout << "Elapsed time is: " << clock() / CLOCKS_PER_SEC << endl;
return 0;
}

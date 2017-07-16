#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long  n,m;
int main()
{
    cin>>n>>m;
    int i;
    for(i=0;i<n;i++)
         cin>>a[i];
        long long ans=0;
        for(i=0;i<n;i++)
        {
            int up=upper_bound(a+i,a+n,a[i]+m)-a;
            //cout<<upper_bound(a+i,a+n,a[i]+m)-a<<" up"<<endl;
            long long dist=up-i-1;
            ans+=dist*(dist-1)/2;

        }
        cout<<ans<<endl;

return 0;
}

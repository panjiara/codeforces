#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll l=1,r=(ll)n*(m+1);
    while(l<r)
    {
        ll x=(l+r)>>1;
        ll y=x-1;
        ll res=0;
        for(int i=1;i<=n;i++)
        {
            res+=min(m,y/i);
        }
        if(res<k)
            l=x+1;
        else
            r=x;

    }
    cout<<l-1;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define forn(n) for(int i=0;i<n;i++)
#define ll  long long int
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int n,f;
    cin>>n>>f;
    ll x=0;
    vector<ll> v;
    forn(n)
    {
        int ft,sd;
        cin>>ft>>sd;
        if(sd<=ft)
        {
            x+=sd;
        }
        if(sd>ft)
        {
            x+=ft;
            if(2*ft<=sd)
                v.push_back(ft);
            else
                v.push_back(sd-ft);

        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    n=v.size();
    for(int i=0;i<min(f,n);i++)
    {
        x+=v[i];

    }
cout<<x<<endl;



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<ll> v;
    vector<ll>::iterator it;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int m;
    cin>>m;
    while(m--)
    {
        int x;
        cin>>x;
       it=upper_bound(v.begin(),v.end(),x) ;
       cout<<it-v.begin()<<endl;


    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int > m1;
    map<int,int> m2;
    int n,x,y,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        ans+=m1[x+y]++;
        ans+=m2[x-y]++;
        cout<<m1[x+y]<<"           "<<m2[x-y]<<endl;
    }
    cout<<ans<<endl;

    return 0;
}

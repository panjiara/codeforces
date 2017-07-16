#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
int main()
{
    int n;
    cin>>n;
    m["polycarp"]=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        string x,y,z;
        cin>>x>>y>>z;
        transform(x.begin(),x.end(),x.begin(),::tolower);
        transform(z.begin(),z.end(),z.begin(),::tolower);
        m[x]=m[z]+1;
       ans=max(ans,m[x]);



    }
cout<<ans<<endl;



    return 0;
}

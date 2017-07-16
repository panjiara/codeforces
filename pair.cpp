#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l;
int main()
{
    vector<pair<int,int> >v;
    cin>>n;
    v.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>j>>l;
        v[i]={j,l};
    }
    for(i=0;i<n;i++)
    {
       if(v[i].first==1)
        cout<<"yep"<<endl,cout<<"yahoo"<<endl;
       else
        cout<<"bc"<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,l;
    string s,p;
    cin>>s>>p;
    n=s.length();
    vector<int> v[26],x[26];
    for(i=0;i<n;i++)
    {
        v[s[i]-97].push_back(i);
    }
    for(i=0;i<n;i++)
    {
        x[p[i]-97].push_back(i);
    }
    for(i='a'-97;i<='z'-97;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<" string 2"<<endl;
    for(i='a'-97;i<='z'-97;i++)
    {
        for(j=0;j<x[i].size();j++)
        {
            cout<<x[i][j]<<" ";
        }
    }

    return 0;
}

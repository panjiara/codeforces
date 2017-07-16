#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l;
string s;
vector<string> v;
vector<int> p[10];
int main()
{
 cin>>n>>m;
 v.resize(n);
 p.resize(n);
 for(i=0;i<n;i++)
 {
     cin>>s;
     v.push_back(s);
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {
         cin>>k;
         v[i].push_back(k);
     }
 }

    return 0;
}

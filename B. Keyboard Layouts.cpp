#include<bits/stdc++.h>
using namespace std;
map<char,char> m;
string s,t,v;
int i,j,k,l,n;
int main()
{
    cin>>s>>t>>v;
    for(i=0;i<s.length();i++)
     {
         m[s[i]]=t[i];
     }
     for(char d='0';d<='9';d++)
     {
         m[d]=d;
     }
     for(i=0;i<v.length();i++)
     {
         if(v[i]<='Z'&&v[i]>='A')
         {

           char g=v[i];
           g=tolower(g);
           g=m[g];
           g=toupper(g);
           cout<<g;
         }
         else
            cout<<m[v[i]];

     }
}

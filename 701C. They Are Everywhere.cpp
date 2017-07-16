#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l,o,p;
char s[100*1000+10];
int c[256];
int main()
{
    cin>>n;
     scanf("%s",s);
     p=set<char>(s,s+n).size();
     o=n;
     while(j<n)
     {
        c[s[j]]++;
        if(c[s[j]]==1)
            p--;
        while(c[s[i]]>1)
        {
            c[s[i]]--;
            i++;
        }
        if(!p)
            o=min(o,j-i+1);
        j++;
     }
     cout<<o<<endl;
    return 0;
}

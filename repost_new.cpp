#include<bits/stdc++.h>
using namespace std;
queue<string,list<string>> v;
map<string,bool> b;
queue<string> d;
#define pb push_back
int bada=0;
int sabse_bada=INT_MIN;
void dfs(string s)
{
    b[s]=1;
    bada++;
           if(bada>sabse_bada)
            sabse_bada=bada;
    list<string>::iterator f=v[s].begin();
    cout<<s<<endl;
    for(f;f!=v[s].end();f++)
    {
        //cout<<*f<<endl;
        if(!b[*f])
        {

           dfs(*f);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x,y,z;
        cin>>x>>y>>z;
       transform(x.begin(), x.end(), x.begin(), ::tolower);
       transform(z.begin(), z.end(), z.begin(), ::tolower);
      //cout<<x<<" "<<z<<endl;
        b[x]=0;
        b[z]=0;
        v[x].pb(z);
    }
   map<string,list<string>>::iterator it=v.begin();
   int ma=INT_MIN;
   int x=0;
   for(it;it!=v.end();it++)
   {
       bada=0;
       if(!b[it->first])
       {
           dfs(it->first);
           cout<<'d'<<endl;
           x++;
       }

   }
cout<<sabse_bada<<endl;




    return 0;
}

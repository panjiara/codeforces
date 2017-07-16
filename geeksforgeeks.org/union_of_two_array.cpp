#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int, int> m;
    int a[n];
   for(int i=0;i<n;i++)
    {
       cin>>a[i];
       m[a[i]]++;
    }
    int s;
    cin>>s;
     int b[s];
    for(int i=0;i<s;i++)
    {
        cin>>b[i];
        m[b[i]]++;
    }
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {

        cout<<it->first<<"union wale log"<<endl;
       if((it->second)==25)
        cout<<it->first<<" intersection wale log  "<<endl;
    }



}

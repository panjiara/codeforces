#include<bits/stdc++.h>
using namespace std;
int m,n,i,j,k,l;
vector<int> v;
int main()
{
  cin>>n;
  v.resize(n);
for(i=0;i<n;i++)
{
    cin>>v[i];
}
l=v[0];
for(i=1;i<n;i++)
    l=__gcd(l,v[i]);
    //cout<<l<<endl;
while(l%2==0)l/=2;
while(l%3==0)l/=3;
 // cout<<l<<endl;
for(i=0;i<n;i++)
{
    int two=1,three=1;
    while(v[i]%(two*2)==0)two*=2;
    while(v[i]%(three*3)==0)three*=3;
    /*cout<<"two   "<<two<<endl;
    cout<<"three  "<<three<<endl;*/
    if(l*two*three!=v[i])
    {
        cout<<"No"<<endl;
        return 0;
    }
}
cout<<"Yes";
return 0;
}

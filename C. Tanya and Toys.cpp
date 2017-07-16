#include<bits/stdc++.h>
using namespace std;
map<int,int> v,c;
long long int n,m,i,j,k,l,cnt;
int main()
{
    //
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>l;
        v[l]=1;
    }
    for(i=1;i<=1000000000;i++)
    {
       if(v[i]==0)
       {
           m-=i;
           if(m>=0)
           {
               c[i]=1;
               cnt++;
           }
       }
        if(m<=0)
            break;
    }
   // cout<<m<<endl;
    cout<<cnt<<endl;
    for(map<int,int>::iterator it=c.begin();it!=c.end();it++)
    {
        cout<<it->first<<" ";
    }
    return 0;
}

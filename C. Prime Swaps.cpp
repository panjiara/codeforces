#include<bits/stdc++.h>
using namespace std;
vector<int> v,pos;
vector<pair<int,int>> ans;
int prime[100005];
bool isPrime(int g)
{
    if(g<=1)return false;
    if(g<=3)return true;
    if(g%2==0||g%3==0)return false;
    for(int i=5;i*1ll*i<=100005;i+=6)
    {
        if(g%i==0||g%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int i,j,k,len,m,n,x,y;
    cin>>n;
    v.resize(100005);
    pos.resize(100005);
    for(i=1;i<n+1;i++)
    {
        cin>>v[i];
        pos[v[i]]=i;
        if(isPrime(i))
            prime[i]=1;
    }
    for(i=1;i<=n;i++)
    {
        x=pos[i];
        len=x-i+1;
        while(len>1)
        {

            for(j=len;j>=0;j--)
            {
                if(prime[j])
                    break;
            }
        ans.push_back({x,x-j+1});
        swap(pos[v[x]],pos[v[x-j+1]]);
        swap(v[x],v[x-j+1]);
        x=x-j+1;
        len=x-i+1;
        }
    }
   cout<<(int)ans.size()<<endl;
   for(i=0;i<(int)ans.size();i++)
   {
       if ( ans[i].first > ans[i].second ){
            swap( ans[i].first, ans[i].second );
        }
        cout<<ans[i].first<<" "<<ans[i].second<<endl;

   }
    return 0;
}

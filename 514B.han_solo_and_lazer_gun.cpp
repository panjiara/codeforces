#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x0,y0;
    cin>>n>>x0>>y0;
   vector<pair<int,int>> v;
   bool k[1001]={ };
     for(int i=0;i<n;i++)
     {
         int x,y;
         cin>>x>>y;
         pair<int ,int> t=make_pair(x,y);
         v.push_back(t);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a=v[i].first,b=v[i].second;
        if(!k[i])
        {
           ans++;
        }
        k[i]=true;
        for(int j=i+1;j<n;j++)
        {
            int x2=v[j].first,y2=v[j].second;
            if(k[!j]&&(y2-y0)*(a-x0)==(b-y0)*(x2-x0))
                k[j]=true;


        }
    }
     cout<<ans<<endl;



    return 0;
}

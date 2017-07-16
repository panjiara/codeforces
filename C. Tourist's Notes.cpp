#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l,x,y,ans;
int main()
{
    cin>>n>>m;
    int flag=0;
    for(i=0;i<m;i++)
    {
        if(flag==0)
        {
            cin>>k>>l;
            flag=1;
        }
        else
            cin>>x>>y;
    if(i>0)
      {
        if(x-k<y-l)
        {
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        else
        {
            if(l==y)
            {
                j=l;
                ans=max(ans,j+(abs(x-k)/2));
            }
            else
            {
                j=min(l,y);
                ans=max(ans,max(y,max(l,j+(abs(x-k)/2))));

            }
        }
        k=x,l=y;
      }
    }
    cout<<ans<<endl;
    return 0;
}


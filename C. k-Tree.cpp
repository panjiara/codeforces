#include<bits/stdc++.h>
using namespace std;
int n,k,d,cnt;
map<int,int> m;
int tree(int x)
{
    for(int i=1;i<=k;i++)
    {

        if(x+i<=n)
        {
           // cout<<i<<"+";
            x+=i;
            if(i>=d)
            {
                m[cnt]=1;
            }
           if( tree(x))
           {
            cnt++;
            return 0;
           }

        }
         if(x>=n)
          {
              if(x==n&&m[cnt]==1)
               return 1;
            return 0;
          }

    }
}
int main()
{
     cin>>n>>k>>d;
      tree(0);
      cout<<cnt<<endl;
    return 0;
}

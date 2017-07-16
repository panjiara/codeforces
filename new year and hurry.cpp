#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    int x=240-k;
    for(int i=1;i<=n;i++)
    {
        a[i]=i*5;
        x-=a[i];
        if(x-a[i]<=0||i==n)
        {
           // cout<<x<<endl;
            if(x<0)
            {
                cout<<i-1<<endl;
                return 0;
            }
          cout<<i<<endl;
            return 0;

        }

    }



    return 0;
}

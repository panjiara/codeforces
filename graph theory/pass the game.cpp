#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n+1]={0};
    int p;
    cin>>p;
    int a;
    for(int i=0;i<p;i++)
    {
         cin>>a;
          if(s[a]==0)
        s[a]=1;

    }
    int z;
    cin>>z;
    for(int i=0;i<z;i++)
    {
         cin>>a;
          if(s[a]==0)
        s[a]=1;
    }
    for(int i=1;i<=n;i++)
    {
        //cout<<i<<endl;
        if(s[i]==0)
        {
            cout<< "Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[3],n,m;
int main()
{    cin>>n;

    for(int i=0;i<3;i++)
    {
        for (int j=0;j<n-i;j++)
        {
            cin>>m;
            a[i]+=m;
        }
    }
  cout<<a[0]-a[1]<<endl;
  cout<<a[1]-a[2];
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],i,result=0;
    for(i=0;i<n;i++)
        cin>>a[i];
   for(i=0;i<m;i++)
    {
       int x,y;
       cin>>x>>y;
       result+=min(a[x-1],a[y-1]);

    }
    cout<<result<<endl;
    return 0;
}

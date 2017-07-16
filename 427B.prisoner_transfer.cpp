#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c;
    cin>>n>>t>>c;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=0;
    for(int i=0;i<n-c+1;i++)
    {
        int flag=0;

        for(int j=i;j<i+c;j++)
        {
            if(a[j]>t)
            {
               flag=1;
               break;
            }
        }
        if(flag==0)
            ans++;
    }

cout<<ans<<endl;
    return 0;
}

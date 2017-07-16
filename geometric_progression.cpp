#include<bits/stdc++.h>
using namespace std;
 map<long long int,long long int> dpsr,dpsl;
int main()
{
    int n,i,j,k;
    cin>>n>>k;

    long long int a[n];
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        dpsr[a[i]]++;
        //cout<<a[i]<<"  "<<dp[a[i]]<<endl;
    }
    for(i=0;i<n;i++)
    {
        dpsr[a[i]]--;
        if(a[i]%k==0)
        {
        sum+=(long long int)(dpsl[a[i]/k]*dpsr[a[i]*k]);
         //cout<<a[i]<<"  "<<dpsl[a[i]/k]<<"  "<<dpsr[a[i]*k]<<endl;
        }
        dpsl[a[i]]++;
    }
    cout<<sum<<endl;

    return 0;
}

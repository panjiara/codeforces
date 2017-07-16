#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    long long int sum=0;
    cout<<setprecision(18);
    for(i=1;i<=n;i++)
    {
        sum+=(long long int)pow(2,i);
    }
    cout<<sum<<endl;
    return 0;
}

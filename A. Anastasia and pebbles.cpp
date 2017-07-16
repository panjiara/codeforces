#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,k;
 cin>>n>>k;
 long long int A[n];
 long long int sum=0;
 for(long long int i=0;i<n;i++)
 {

     cin>>A[i];
 }
for(long long int i=0;i<n;i++)
{
    int t;
    if(A[i]%k>0)
        t=A[i]/k+1;
        else
        t=A[i]/k;
    sum=sum+t;
}

if(sum%2>0)
cout<<sum/2+1<<"\n";
else
    cout<<sum/2<<endl;

    return 0;
}

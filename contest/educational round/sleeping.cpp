#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
     cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
       long long  int total_sum=0,sum=0;
    for(int i=0;i<=n-k;i++)
    {
        int temp=k;
        int j=i;
        while(temp--&&i==0)
        {
          sum=sum+a[j];
          j++;
        }
        if(i>0)
        sum=sum-a[i-1]+a[i+k-1];
         total_sum+=sum;


    }
    cout << fixed;
    cout << setprecision(8);
    double x=(double)(total_sum)/(n-k+1);
    cout<<x<<endl;
    return 0;
}

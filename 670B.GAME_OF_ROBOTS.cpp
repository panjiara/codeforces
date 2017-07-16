#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int n,k;
    cin>>n>>k;
  long long   int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
       long long  int temp=n*(n+1)/2;
      long long  int i=n;
        while(temp>=k)
        {
            temp-=i;
            i--;
        }

       cout<<a[k-temp-1]<<endl;

    return 0;
}

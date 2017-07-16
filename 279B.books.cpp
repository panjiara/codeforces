#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l;
int a[1000000];
long long int sum;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   i=0;
   j=0;
  while(i<n)
  {
     sum+=a[i++];
     while(sum>m)
     {
         sum-=a[j++];
     }
     l=max(i-j,l);
  }

   cout<<l<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long int n ,s;
int a[1000007];
long long int d[1000007];
long long int market(int z)
{

         for(int i=0;i<n;i++)
         {
         d[i]=a[i]+(long long int )z*(i+1);
         }
         sort(d,d+n);
         long long int sum=0;
         for(int i=0;i<z;i++)
         {
             sum+=d[i];
         }
         return sum;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>n>>s;
for(int i=0;i<n;i++)
{
   cin>>a[i];
}
 int l=0,r=n+1;
 while(l<r-1)
 {
     int m=(l+r)/2;
     if(market(m)<=s)
        l=m;
     else
        r=m;

}
    cout<<l<<" "<<market(l)<<endl;

    return 0;
}

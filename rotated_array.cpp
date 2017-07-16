#include<bits/stdc++.h>
/*int hcf(int x,int y)
{
if(y==0)
return x;
else
return hcf(y,x%y);
}*/
int hcf(int a, int b)
{
    while(b)
    b ^= a ^= b ^= a %= b;
    return a;
}
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int d;
  cin>>d;
  int j,k,temp;
  for(int i=0;i<hcf(d,n);i++)
  {
  j=i;
  temp=a[i];
  while(1)
  {
    k=j+d;
    if(k>=n)
    k=k-n;
    if(k==i)
    break;
    a[j]=a[k];
    j=k;
   }
   a[j]=temp;
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";





  return 0;
}

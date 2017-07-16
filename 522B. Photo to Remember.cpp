#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l,r;
int w[200010],h[200010];
int suml[200010],sumr[200010];
int maxl[200010],maxr[200010];
int main()
{
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>w[i]>>h[i];
  }
  for(i=0;i<n;i++)
  {
      k+=w[i];
  }
  k=0;
  for(i=n-1;i>=0;i--)
  {
      k+=w[i];
      sumr[i]=k;
  }
  for(i=0;i<n;i++)
  {
     l=max(l,h[i]);
     maxl[i]=l;
  }
  for(i=n-1;i>=0;i--)
  {
     r=max(r,h[i]);
     maxr[i]=r;
  }
  for(i=0;i<n;i++)
  {
    if(i>0&&i<n-1)
      cout<<(suml[i-1]+sumr[i+1])*max(maxl[i-1],maxr[i+1])<<" ";
      else if(i==0)
      {
          cout<<sumr[i+1]*maxr[i+1]<<" ";
      }
      else
        cout<<suml[i-1]*maxl[i-1]<<" ";
  }
    return 0;
}

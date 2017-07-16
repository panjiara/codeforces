#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int  a[n];
  for (size_t i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  map<int,pair<int,int>> m;
  for(size_t i=0;i<n-1;i++)
  {
       for (size_t j = i+1; j < n; j++)
       {
        int product=a[i]*a[j];
        if(m.find(product)!=m.end())
        {
          pair<int,int> pp=m[product];
          cout<<i<<" "<<j<<"  "<<"and"<<pp.first<<"  "<<pp.second<<endl;
        }
        else
        {
          t[product]=make_pair(i,j);
        }
       }


  }
  return 0;
}

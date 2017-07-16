#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
map<int ,int> X;
map<int,int> Y;
map<pair<int,int>,int> M;
long long int res=0;
for(int i=0;i<n;i++)
{
  int x,y;
  cin>>x>>y;
  res+=X[x]++;
  res+=Y[y]++;
  res-=M[make_pair(x,y)]++;
}
cout<<res<<endl;



  return 0;
}

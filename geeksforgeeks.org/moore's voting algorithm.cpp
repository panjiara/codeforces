#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int a[n];
  for (size_t i = 0; i < n; i++) {
    cin>>a[i];
  }
  int max_index=0,count=1;
  for(int i=1;i<n;i++)
  {
     if(a[max_index]==a[i])
     {
       count++;
     }
     if(a[max_index]!=a[i])
     count--;
     if(count==0)
     {
       max_index=i;
       count=1;
     }
  }
  int cand=a[max_index];
  count=0;
  for(int i=0;i<n;i++)
  if(cand==a[i])
  count++;
  if(count>n/2)
  cout<<cand<<endl;
  else
  cout<<"no such key"<<endl;

  return 0;
}

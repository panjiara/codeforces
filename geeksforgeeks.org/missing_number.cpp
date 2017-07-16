#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for (size_t i = 0; i <n-1; i++) {
    /* code */cin>>a[i];

  }
  int x1=0,x2=0;

  for (size_t i = 1; i <= n; i++) {
    /* code */
    x1=x1^i;
  }
  for (size_t i = 0; i < n-1; i++) {
    /* code */
    x2=x2^a[i];
  }
   cout<<(x1^x2)<<endl;

  return 0;
}

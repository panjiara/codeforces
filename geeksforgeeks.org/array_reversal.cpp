#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int a[n];
  for (size_t i = 0; i < n; i++) {
    cin>>a[i];
  }
  int l=0,r=n-1;
  int temp;
  while(l<r)
  {
     temp=a[l];
     a[l]=a[r];
     a[r]=temp;
     l++;
     r--;

  }
  for(int i=0;i<n;i++)
  cout<<a[i];
  return 0;
}

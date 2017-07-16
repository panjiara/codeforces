#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int a[n];
  for (size_t i = 0; i < n; i++) {
    cin>>a[i];/* code */
  }
  int res=0;
 for (size_t i = 0; i < n; i++) {
   res=res ^ a[i];
   /* code */
 }
 cout<<res<<endl;
  return 0;
}

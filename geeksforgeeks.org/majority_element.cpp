#include<bits/stdc++.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
   int n;
   cin>>n;
  int a[n];
  int b[100000]={0};
  for (size_t i = 0; i < n; i++)
  {

    cin>>a[i];
    b[a[i]]++;

  }\
  int flag=0;
  for (size_t i = 0; i < 100000; i++)
  {

    if(b[i]>n/2)
    {
      cout<<i<<endl;
      flag=1;
    }
    /* code */
  }
  if(flag==0)
  cout<<"not found"<<endl;

   /* code */
   return 0;
 }

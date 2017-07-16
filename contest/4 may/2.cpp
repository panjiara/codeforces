#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   char a[n];
   int j=0;
   for(int i=0;i<n;i++)
   {
       int flag=0;
      if(a[i-2]!='a'&&flag==0)
      {
          a[i]='a';
          flag=1;

      }
      if(a[i-2]!='b'&&flag==0)
      {
          a[i]='b';
           flag=1;
      }
      if(a[i-2]!='c'&&flag==0)
      {
          a[i]='c';

      }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];







    return 0;
}

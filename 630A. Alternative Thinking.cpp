#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    char flag;
    cin>>n;
    int a[n];
   for(i=0;i<n;i++)
    a[i]=1;
    string s;
    cin>>s;
    i=0,j=1;
   flag=s[0];
   j=1;
    for(i=0;i<n;i++)
    {
      if(flag!=s[i])
      {
        flag=s[i];
        j++;
      }
    }

   cout<<min(n,j+2)<<endl;
    return 0;
}

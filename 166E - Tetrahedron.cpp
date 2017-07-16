#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
  long long int  n;
  cin>>n;
  long long int a=1,b=0,t;
  for(int i=2;i<=n;i++)
  {
      t=b;
      b=(2*b+3*a)%MOD;
      a=t;
  }
   cout<<b<<endl;


    return 0;

}

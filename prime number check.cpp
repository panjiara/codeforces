#include<bits/stdc++.h>
using namespace std;
bool isPrime(int g)
{
    if(g<=1)return false;
    if(g<=3)return true;
    if(g%2==0||g%3==0)return false;
    for(int i=5;i*i<g;i+=6)
    {
        if(g%i==0||g%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int prime[101],prime1[100];
    int i,j,k,l;
    for(i=0;i<100;i++)
    {
      prime[i]=1;
        if(isPrime(i))
           cout<<i<<endl;
    }
    for(i=2;i<100;i++)
    {
        if(prime[i]&&(i*1ll*i<100))
        {
            for(j=i*i;j<100;j+=i)
            {
                prime[j]=0;
            }
        }
    }
   for(i=0;i<100;i++)
   {
      /* if(prime[i]==prime1[i])
          {
              cout<<i;
              cout<<endl;
          }
          if(prime1[i]==1)
          cout<<i<<endl;*/
   }
    return 0;
}

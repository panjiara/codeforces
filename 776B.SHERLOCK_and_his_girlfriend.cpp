#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
   if(n<=1)
        return false;
   if(n<=3)
    return true;
   if(n%2==0||n%3==0)
    return false;
   for(int i=5;i*i<=n;i=i+6)
    {
       if(n%i==0||n%(i+2)==0)
        return false;
    }

   return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1]={0};
    for(int i=1;i<=n;i++)
    {
       if(isprime(i+1))
        a[i]=1;
       else
        a[i]=2;
    }
    if(n==1||n==2)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";






    return 0;
}

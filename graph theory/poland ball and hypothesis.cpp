#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
int main()
{
    int n;
    cin >>n;
    if(n%2==0)
    {
        if(!isPrime(n+1))
        {
            cout<<"1"<<endl;
            return 0;
        }
        for(int i=1;i<=1000;i=i+2)
        {
            if(!isPrime(n*i+1))
        {
            cout<<i<<endl;
            return 0;
        }
        }
    }
    else
    {
        if(!isPrime(n+1))
        {
            cout<<"1"<<endl;
            return 0;
        }
        for(int i=2;i<=1000;i=i+2)
        {
             if(!isPrime(n*i+1))
        {
            cout<<i<<endl;
            return 0;
        }
        }




    }
    return 0;
}

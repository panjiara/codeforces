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
    long long int  n,i,j ;
    long  double k;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        j=(long long int)sqrt(a[i]);
        k=sqrt(a[i]);
        if(abs(j-k)==0)
        {
           if(isPrime(k))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
       else
            cout<<"NO"<<endl;

    }//



    return 0;
}

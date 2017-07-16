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
int i,j,k,l;
long long int c;
int x;
long long int chotu=INT_MAX;
int prime[100005];
int a[501][501];
long long int val[501][501];
int main()
{
    int n,m;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=2;i<=100005;i++)
    {
        if(isPrime(i))
        {
            prime[k++]=i;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=*lower_bound(prime,prime+k,a[i][j]);

            if  (x-a[i][j]>=0)
              val[i][j]=x-a[i][j];
        }
    }
   for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
           c+=val[i][j];
        }
        chotu=min(c,chotu);

    }
    for(i=0;i<m;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
          c+=val[j][i];
        }
        chotu=min(c,chotu);

    }
    cout<<chotu<<endl;
    return 0;
}

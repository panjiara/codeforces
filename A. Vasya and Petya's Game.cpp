#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l,cnt;
int a[1001];
bool isprime(int n)
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
    memset(a,0,sizeof a);
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(isprime(i))
        {
             for(j=1;(int)pow(i,j)<=n;j++)
                {
                    if(a[(int)pow(i,j)]!=1)
                        {
                            a[(int)pow(i,j)]=1;
                            cnt++;
                         }
                 }
        }
    }
   cout<<cnt<<endl;
    for(i=2;i<=n;i++)
    {
        if(a[i]==1)
            cout<<i<<" ";
    }
    return 0;
}

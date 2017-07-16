#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i=0;i<n;i++)
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    forn(i,n)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    //cout<<sum<<endl;
    int reqsum=n*k-n/2;
   int i=n;
    while(1)
    {
        if(reqsum<=sum)
        {
            cout<<n-i<<endl;
            return 0;
        }
         n++;
        sum+=k;
        reqsum=n*k-n/2;
    }
   return 0;
}

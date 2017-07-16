#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int i=1;i<n;i++)
typedef long long int ll ;
ll n,B[100005],C[100005],A[100005];
int main()
{
    cin>>n;
    f(n)
    cin>>A[i];
    f(n)
    {
      B[i]=1;
      C[i]=1;
    }
    g(n)
    {
     if(A[i]>A[i-1])
        B[i]+=B[i-1];
    }
    for(int i=n-1;i>0;i--)
    {
        if(A[i]>A[i-1])
            C[i-1]+=C[i];
    }
   /* f(n)
    cout<<B[i]<<"  ";
    cout<<endl;
    f(n)
    cout<<C[i]<<"  ";*/
    ll res=0;
    for(int i=0;i<n;i++)
    {
        if(A[i+1] - A[i-1] >= 2)
          {
              res = max(res , (B[i-1] + C[i+1]));
             // cout<<res<< "if " <<i<<endl;
          }
        else
            res=max(res,max(B[i-1],C[i+1]));



    }
cout<<res+1<<endl;



}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int A[n],R[n];
   for(int i=0;i<n;i++)
   {
     cin>>A[i];
     R[i]=1;
   }

    for(int i=0;i<n-1;i++)
    {
        if(A[i]<A[i+1])
        {
            R[i+1]=R[i]+1;
        }
    }
    int maxx;
    maxx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(R[i]>maxx)
            maxx=R[i];
    }
    cout<<maxx<<endl;

    return 0;
}

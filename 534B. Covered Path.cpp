#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ll  sum=0;
   ll  v1,v2,t,k;
    cin>>v1>>v2;
    cin>>t>>k;
   ll  A[t]={0};
    A[t-1]=v2;
    A[0]=v1;
    for(int i=1;i<t-1;i++)
    {
       A[i]=min(A[i-1]+k,A[t-1]+(t-1-i)*k);
     }
     for(int i=0;i<t;i++)
     {
         sum=sum+A[i];
     }

cout<<sum<<endl;



    return 0;

}

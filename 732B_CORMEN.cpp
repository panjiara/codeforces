#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int A[n];
    int R[n]={0};
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum1+=A[i];
    }
    // cout<<sum1<<endl;
    for(int i=0;i<n-1;i++)
    {
        sum=A[i]+A[i+1];
        if(sum<k)
        {
          int diff=k-sum;
         /* if(A[i]<A[i+1])
          {
              A[i]=A[i]+diff;

          }
          else*/
            A[i+1]=A[i+1]+diff;

        }


    }
    int res=0;
    for(int i=0;i<n;i++)
    {
       res+=A[i];

    }
    //cout<<res<<endl;
    cout<<res-sum1<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;


    return 0;
}

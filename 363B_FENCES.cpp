#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int res=INT_MAX;
    int index=0;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
        int flag=0;
        int sum=0;
    for(int i=0;i<=n-k;i++)
    {

        if(flag==0)
        {
            sum=0;
            for(int j=i;j<i+k;j++)
            {
                sum+=A[i];

            }
            if(sum<res)
            {
                res=sum;
                index=i;
            }
            flag=1;
        }
        else
        {
          if(sum-A[i-1]+A[i+k-1]<sum&&sum-A[i-1]+A[i+k-1]<res)
          {
              res=sum;
              index=i;
          }
          else
          {
           sum=sum-A[i-1]+A[i+k-1];
          }



        }



    }
    cout<<index+1<<endl;




    return 0;
}

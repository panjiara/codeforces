#include<bits/stdc++.h>
using namespace std;
int main()
{
 int N;
 cin>>N;
 int A[N];
 int res=0;
 for(int i=0;i<N;i++)
 {
   cin>>A[i];
   if(A[i]==1)
    res++;
 }
 int max=INT_MIN,summax=0,summax1=0;
 for(int L=1;L<=N;L++)
 {
     for(int i=0;i<N-L+1;i++)
     {
        int  j=i+L-1;
        int sum0=0,sum1=0;
         for(int k=i;k<=j;k++)
         {
          if(A[k]==0)
            sum0++;
          if(A[k]==1)
            sum1++;
          }
          if(max<sum0-sum1||N==1)
          {

            max=sum0-sum1;
            summax=sum0;
            summax1=sum1;
            //cout<<max<<endl;


          }

      }


 }
 //cout<<summax<<endl;
 //cout<<res<<endl;
 //cout<<summax1<<endl

 cout<<summax+res-summax1<<endl;





    return 0;
}

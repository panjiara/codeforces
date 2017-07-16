#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin>>N;
   int A[N];
   for(int i=0;i<N;i++)
        cin>>A[i];
    int ma=0;
    for(int l=1;l<=N;l++)
    {
        for(int i=1;i<N-l+1;i++)
        {
            int sum=0;
            for(int j=i;j<i+l-1;j++)
              sum=sum+A[j];
            if(sum>ma)
              ma=sum;
        }
    }
            cout<<ma<<endl;


    return 0;
}

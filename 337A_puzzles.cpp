#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    int A[M];
    for(int i=0;i<M;i++)
        cin>>A[i];
        sort(A,A+M);
        int result=INT_MAX;
        for(int i=0;i<M;i++)
            cout<<A[i]<<endl;
        for(int i=0;i<M-N+1;i++)
        {
            if(A[i+N-1]-A[i]<result)
                result=A[i+N-1]-A[i];

        }

cout<<result<<endl;




    return 0;
}

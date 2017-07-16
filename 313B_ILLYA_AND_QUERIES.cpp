#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin>>S;
    int L=S.length();
    int A[L][L];
    for(int i=0;i<L;i++)
    {
        for(int j=0;j<L;j++)
        {
            if(i==j)
                A[i][j]=0;
           else if(S[j-1]==S[j])
            {
                A[i][j]=A[i][j-1]+1;
            }
            else
                A[i][j]=A[i][j-1];
        }
    }
    int N;
    cin>>N;
   while(N)
    {
     int l,r;
     cin>>l>>r;
        cout<<A[l-1][r-1]<<endl;
       N--;
    }
return 0;
}

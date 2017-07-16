#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int L=S.length();
    int A[100001];
    for(int i=1;i<L;i++ )
    {
        A[i]=0;
        if(S[i]==S[i-1])
        {
            A[i]=A[i-1]+1;
        }
        else
            A[i]=A[i-1];
    }
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<A[y-1]-A[x-1]<<endl;




    }






    return 0;
}

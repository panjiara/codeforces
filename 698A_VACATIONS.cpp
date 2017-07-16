#include<bits/stdc++.h>
using namespace std;
int A[110];
int D[110][3];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]&1)D[i][1]=max(D[i-1][0],D[i-1][2])+1;
        if(A[i]&2)D[i][2]=max(D[i-1][0],D[i-1][1])+1;
        D[i][0]=max(max(D[i-1][0],D[i-1][1]),D[i-1][2]);
        cout<<A[i]<<endl;
        cout<<D[i][0]<<"  " <<D[i][1]<<"  "<<D[i][2]<<endl;
}
     cout<<D[n][2]<<endl;


     return 0;
}

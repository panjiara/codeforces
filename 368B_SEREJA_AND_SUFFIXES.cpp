#include<bits/stdc++.h>
using namespace std;
bool D[1000001];
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n+1];
    int R[n+1];
    for(int i=1;i<=n;i++)
    {
       cin>>A[i];
    }
    int count=0;
    for(int i=n;i>0;i--)
    {
        if(D[A[i]]==0)
        {
            count++;
            R[i]=count;
            D[A[i]]=1;
        }
        else
            R[i]=count;

    }
    //for(int i=1;i<=n;i++)
        //cout<<R[i]<<endl;
        for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        cout<<R[x]<<"\n";


    }





    return 0;
}

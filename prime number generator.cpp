#include<bits/stdc++.H>
using namespace std;
bool a[10000000];
int main()
{
    int n,i,j;
    cin>>n;
    //memset(a,true,sizeof a);
   for(i=2;i<=n;i++)
    a[i]=true;
    a[0]=false;
    a[1]=false;
    for(i=2;i*i<=n;i++)
    {
        if(a[i]==true)
        {
            for(j=2*i;j<=n;j+=i)
                a[j]=false;
        }
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]==1)
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

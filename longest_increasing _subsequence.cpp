#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int d[n];
    int a[n];
    //memset(a,1,sizeof a);
    for(i=0;i<n;i++)
    {
         cin>>d[i];
         a[i]=1;
    }

    j=0,i=1;
    while(i<n)
    {
        while(j<i)
        {
            if(d[j]<d[i])
            {
                a[i]=max(a[i],a[j]+1);
            }
            j++;
        }
        j=0;
        i++;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}

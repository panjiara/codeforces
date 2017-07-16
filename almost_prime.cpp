#include<bits/stdc++.h>
using namespace std;
int w[3002],p[3002];
int main()
{
    int i,j,n;
    for(i=1;i<3001;i++)
        p[i]=i;
    for(i=2;i<3001;i++)
    {
        if(w[i])
            continue;
        for(j=i;j<3001;j+=i)
        {
            w[j]++;
            p[j]/=i;
        }
    }
    for(i=2;i<3001;i++)
        w[i]+=w[p[i]];
    cin>>n;
    j=0;
    for(i=1;i<n+1;i++)
    {
        cout<<w[i]<<" "<<i<<endl;
        if(w[i]==2)
            j++;
    }
    cout<<j<<endl;

}

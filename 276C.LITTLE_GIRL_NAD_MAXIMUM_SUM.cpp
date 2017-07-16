#include<bits/stdc++.h>
using namespace std;
int a[200005],c[200005];
long long  b[200005];
long long int sum,v,n,q,i,j,l,r;
int main()
{
    cin>>n>>q;
    for( i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for( i=0;i<q;i++)
    {
        cin>>l>>r;
        l--;
        r--;
        c[l]++;
        if(r<n-1)
            c[r+1]--;
    }
    for(i=0;i<n;i++)
    {
        v+=c[i];
        b[i]=v;
    }
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        sum+=(a[i]*b[i]);
    }
    cout<<sum<<endl;



    return 0;
}

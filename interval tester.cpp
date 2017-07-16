#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l;
long long int sum;
int a[10],c[10];
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k>>l;
        k--;
        l--;
        a[k]++;
        if(l<9)
            a[l+1]--;

      for(j=0;j<10;j++)
        cout<<a[j]<<" ";
        cout<<endl;
    }
    j=0;
    for(i=0;i<10;i++)
    {
        j+=a[i];
        c[i]=j;
    }
    for(i=0;i<10;i++)
        cout<<c[i]<<" ";
    return 0;
}

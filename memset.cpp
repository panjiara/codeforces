#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    array<int,n> a;
    memset(a,1,sizeof a);
    a.fill(5);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
return 0;
}


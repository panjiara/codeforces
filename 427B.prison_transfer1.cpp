#include<bits/stdc++.h>
using namespace std;
int a,b,c,n,t,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>t>>c;
    while(n--)
    {
    cin>>a;
    b=(a<=t)?b+1:0;
    j=j+(b>=c);
    }
    cout<<j;
}

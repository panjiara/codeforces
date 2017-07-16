#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int n,m;
int main()
{
    cin>>n>>m;
    cin>>a>>b;
    c={a[0],b[0],a[n-1],b[m-1]};
    cout<<(c=="<v>^"||c==">^<v"?"YES":"NO");
}

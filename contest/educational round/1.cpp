#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int t=1;
    int copy=x;
    while(copy/t>=10)
    {
        t*=10;
    }
    int w=(copy)/t+1;
    cout<<w*t-x<<endl;
    return 0;
}

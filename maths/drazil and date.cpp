#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  a,b,c;
    cin>>a>>b>>c;

    if(abs(a)+abs(b)==c)
        cout<<"Yes"<<endl;
    else if(a==0&&b==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

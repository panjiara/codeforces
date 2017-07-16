#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(abs(a)+abs(b)>c||(c-abs(a)-abs(b))%2!=0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}

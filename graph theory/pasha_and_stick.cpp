#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n;
    cin>>n;
    //cout<<n%4<<endl;
    if(n%4==0)
        cout<<n/4-1<<endl;
    else if(n%4==1||n%4==3)
        cout<<0<<endl;
    else
        cout<<n/4<<endl;
//
    return 0;
}

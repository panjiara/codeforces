#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    if(n%2!=0)
    cout<<"-1"<<endl;
    else
    {
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')x--;
        if(s[i]=='R')x++;
        if(s[i]=='D')y--;
        if(s[i]=='U')y++;
    }
    cout<<(abs(x)+abs(y))/2<<endl;


    }



    return 0;
}


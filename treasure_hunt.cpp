#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x,y;
    cin>>x1>>y1>>x2>>y2;
    cin>>x>>y;
    int s,d;
    s=x1-0;
    d=y1-0;
    x2-=s;
    y2-=d;
    cout<<(x2-s)*y<<" "<<y2<<endl;
    if(((x2-s)==0&&y*x==y2)||(x2-s)*y==y2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}

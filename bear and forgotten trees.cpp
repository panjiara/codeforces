#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,h;
    int i;
    cin>>n>>l>>h;
    if(l>2*h||(l==1&&n>=3))
       {
            cout<<-1;
        return 0;
        }
    if(h==1)
    {
        for(i=2;i<=n;i++)
            cout<<1<<" "<<i<<endl;
            return 0;
    }
    for(i=2;i<=h+1;i++)
            cout<<i-1<<" "<<i<<endl;

    if(h<l)
    {
        cout<<1<<" "<<h+2<<endl;
        for(i=h+2;i<=l;i++)
        {
            cout<<i<<" "<<i+1<<endl;
        }
    }
    for(i=l+2;i<=n;i++)
        cout<<2<<" "<<i<<endl;


}

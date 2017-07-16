#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l;

int main()
{
    cin>>n>>m;
while(n>=2&&m>0||n>0&&m>=2)
{
    if(n>m)
    {
        n-=2;
        m--;
        i++;
    }
    else
    {
        m-=2;
        n--;
        i++;
    }
}
    cout<<i<<endl;
    //cout<<n<<" "<<m<<endl;
    return 0;
}


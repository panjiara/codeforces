#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l;

int main()
{
    cin>>n>>m;
    while(n>0&&m>=2||m>0&&n>=2)
    {
       if(m>n)
       {
           i++;
           n--;
           m-=2;
       }
       else
       {
           i++;
           n-=2;
           m--;
       }
    }

    cout<<i<<endl;
    //cout<<n<<" "<<m<<endl;
    return 0;
}

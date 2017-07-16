#include<bits/stdc++.h>
using namespace std;
long long int n,m ,k;
long long int v,temp;
long double i,j,s=INT_MAX,l;

int main()
{
    setprecision(18);
    cin>>n>>m;
   k=180*(n-2);
   i=k/n;
   j=i/(n-2);
for(l=i;l>0;l-=j)
   {
       //cout<<s<< " "<<endl;
    if(s>fabs(l-m))
    {
        s=fabs(l-m);
       temp=v;
       //cout<<temp<<endl;
    }
        v++;
        if(v>=n+3)
            break;
    }

    cout<<2<<" "<<1<<" "<<n-temp<<endl;

    return 0;
}

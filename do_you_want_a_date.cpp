#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
#define ll long long int
#define M 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    ll p[n+1];
   loop(n)
   {
       cin>>a[i];
   }
   ll sum=0;
   sort(a,a+n);
   p[0]=1;
   for(int i=1;i<=n;i++)
   {
       p[i]=(p[i-1]*2)%M;
   }
   for(int i=0;i<n;i++)
   {
       ll x=p[i]-p[n-1-i]+M;
       cout<<x<<endl;
       x*=a[i];
       cout<<x<<"   "<<a[i]<<endl;
        ll b=x%M;
        cout<<b<<"----"<<endl;
         sum+=b;

    }
    sum=sum%M;
cout<<sum<<endl;
return 0;
}

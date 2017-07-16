#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ll n;
   cin>>n;
   ll A[n+1],S1[n+1],B[n+1],S2[n+1];
   for(ll i=1;i<=n;i++)
        {
            cin>>A[i];
            B[i]=A[i];
        }
        A[0]=0;
        B[0]=0;
   sort(B,B+n+1);
   S1[0]=A[0];
   for(ll i=1;i<=n;i++)
   {
       S1[i]=0;
       S1[i]=S1[i-1]+A[i];
      // cout<<S1[i]<<endl;
    }
    S2[0]=B[0];
   for(ll i=1;i<=n;i++)
   {
       S2[i]=0;
       S2[i]=S2[i-1]+B[i];
        //cout<<S2[i]<<endl;
    }
    ll k;
    cin>>k;
    while(k)
    {
     ll q,i,j;
     cin>>q>>i>>j;
     if(q==2)
     {
         cout<<S2[j]-S2[i-1]<<endl;
     }
     else
        cout<<S1[j]-S1[i-1]<<endl;
    k--;
    }




    return 0;
}

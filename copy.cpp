#include <bits/stdc++.h>
using namespace std;

typedef long long int ll ;
#define pb push_back
#define cases ll t;cin>>t;while(t--)
#define endl "\n"
#define maxx 1e18
#define mod 1e9 + 7
ll dp1[100005] , dp2[100005] ;
ll arr[100005] ;
int main()
{
   ll n ;
   cin >> n ;
   for ( int i = 0 ; i < n ; i++ )
   {
       cin >> arr[i] ;
   }
   dp1[0] = 1 ;

   for(int i = 1 ; i < n ; i++ )
   {
        if( arr[i] > arr[i-1] )
        {
            dp1[i] = dp1[i - 1] + 1 ;
        }
        else
            dp1[i] = 1 ;
   }
   dp2[n-1] = 1 ;
   for( int i = n - 2 ; i >= 0 ; i-- )
   {
       if(arr[i] <  arr[i+1] )
       {
           dp2[i] = dp2[i+1] + 1 ;
       }
       else
        dp2[i] = 1 ;
   }
   ll ans = 0 ;
   /*for(int i = 0 ;i  < n ; i++ )
   {
       cout<< dp1[i] << " " ;
   }
   cout<< endl;
    for(int i = 0 ;i  < n ; i++ )
   {
       cout<< dp2[i] << " " ;
   }
   cout<< endl;*/
   for(int i = 0; i < n ; i++ )
   {
       if(arr[i+1] - arr[i-1] >= 2 )
       {    //cout<<arr[i-1]<<" "<<arr[i+1]<<"  "<<i<<"\n";
           ans = max( ans , dp1[i-1] + dp2[i+1] ) ;
           //cout<<ans<< "if " <<i<<endl;
       }

        else
        {
            ans = max( ans , max(dp1[i-1] , dp2[i+1]) ) ;
           //cout<<ans<< " else" <<i<<endl;
        }

   }

   cout << ans + 1  ;
}

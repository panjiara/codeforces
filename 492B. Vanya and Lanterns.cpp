#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ll n,l;
   cin>>n>>l;
   ll A[n];
   for(ll i=0;i<n;i++)
        cin>>A[i];
        sort(A,A+n);
        double max=A[0]/1.0;
        for(int i=1;i<n;i++)
        {
            double z=(A[i]-A[i-1])/2.0;
            if(max<z)
                max=z;
        }
        if(l-A[n-1]>max)
            max=l-A[n-1];
        cout<<fixed<<max<<endl;




    return 0;
}

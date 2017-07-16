#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,m;
    cin>>n>>m;

        long long int chotu;
        long long int motu;
       motu=(n-m+1)*(n-m)/2;
       chotu=0;
       long long int temp= n/m;
       long long int t=n-temp*m;
       chotu=t*(temp*(temp+1)/2)+(m-t)*(temp*(temp-1)/2);
        cout<<chotu<<" "<<motu<<endl;

    return 0;
}

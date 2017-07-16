#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,k,w;
    cin>>k>>n>>w;
    long long int cost=0;
    for(int i=1;i<=w;i++){
        cost+=i*k;
    }
    if(cost<=n)
        cout<<"0"<<endl;
    else
    cout<<cost-n<<endl;




    return 0;
}

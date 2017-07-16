#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int isse_pehle=1;
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=( (temp-1)*isse_pehle +1 );
        temp--;
        isse_pehle++;
       //cout<<sum<<endl;

    }
    cout<<sum<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int fm,sm=fm=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>fm)
        {
        sm=fm;
        fm=a[i];
        }
        else if(a[i]>sm&&a[i]!=fm)
            sm=a[i];
    }
    cout<<fm<<" "<<sm<<endl;




    return 0;
}

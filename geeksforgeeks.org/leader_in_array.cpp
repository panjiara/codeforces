#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int maxx=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
       if(a[i]>maxx)
            maxx=a[i];
        b[i]=maxx;
           if(a[i]>=b[i])
            cout<<a[i]<<" ";
    }



    return 0;

}

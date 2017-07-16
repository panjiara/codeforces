#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int in=0,ex=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        temp=ex+a[i];
        ex=max(in,ex);
        in=temp;
    cout<<max(in,ex)<<endl;
    }
    //cout<<max(in,ex);


    return 0;
}

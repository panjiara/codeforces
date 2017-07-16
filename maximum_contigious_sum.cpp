#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int max_so_far=INT_MIN,max_end_here=0;
    for(i=0;i<n;i++)
    {
        max_end_here+=a[i];
        if(max_end_here<0)
            max_end_here=0;
        if(max_so_far<max_end_here)
            max_so_far=max_end_here;



    }
    cout<<max_so_far<<endl;
}

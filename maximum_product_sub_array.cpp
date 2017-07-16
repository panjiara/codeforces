#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int max_end_here,min_end_here,max_so_far;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int m=INT_MIN;
    int prod=1;
    max_end_here=1;
    min_end_here=1;
    max_so_far=1;
    for(i=0;i<n;i++)
    {

       if(a[i]>0)
       {
           max_end_here=max_end_here*a[i];
           min_end_here=min(min_end_here*a[i],1);
       }
        else if(a[i]==0)
        {
            max_end_here=1;
            min_end_here=1;
        }
        else
        {
            int temp=max_end_here;
            max_end_here=max(min_end_here*a[i],1);
            min_end_here=temp*a[i];
        }
        if(max_so_far<max_end_here)
            max_so_far=max_end_here;
     cout<<min_end_here<<" "<<max_end_here<<" "<<a[i]<<endl;
    }
    cout<<max_so_far<<endl;

    return 0;
}

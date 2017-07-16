#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,prev,rest=0,i;
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    cin>>a[i];
    prev=a[0];
    if(a[0]==0)
        rest++;
    for(i=1;i<n;i++)
    {
        if(a[i]==0)
        {
            rest++;
            prev=0;
            continue;

        }
        else if(a[i]==3)
        {
            if(prev==2)
                prev=1;
            else if(prev==1)
                prev=2;
        }
        else if(prev==a[i])
        {
            rest++;
            prev=0;
        }
        else
        {
            if(a[i]==1)
                prev=1;
            if(a[i]==2)
                prev=2;


        }


    }
    cout<<rest<<endl;

    return 0;
}


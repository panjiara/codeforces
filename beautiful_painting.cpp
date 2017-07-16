#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j,k=0;
    cin>>n;
    int a[n+1];
    memset(a,0,sizeof a);
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1]&&i!=n-2)
        {
            i++;
            j=upper_bound(a+i,a+n,a[i])-a;
            if(j==n)
                j=n-1;
            //cout<<a[i]<< " swapiing    "<<a[j]<<endl;
            swap(a[i],a[j]);
            /*for(j=0;j<n;j++)
              cout<<a[j]<<"   ";
              cout<<endl;*/
        }


    }

    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
            k++;
    }
    cout<<k<<endl;
    return 0;
}

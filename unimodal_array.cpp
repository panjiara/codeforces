#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l;
vector<int> a;
int f1,f2,f3;
int main()
{
    cin>>n;
    a.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            f1=1;
        }
        else
        {
            j=i+1;
            break;
        }
    }
    for(i=j;i<n-1;i++)
    {
        if(a[i]==a[i+1])
            {
                f2=1;
                j=i+1;
            }
        else
        {
            j=i;
            break;
        }
    }
   // cout<<j<<endl;
    for(i=j;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
         f3=1;
        }
        else
        {
            //cout<<1;
            cout<<"NO";
            return 0;
        }
    }
    //cout<<f1<<f2<<f3<<endl;
    if(f1==f3)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}

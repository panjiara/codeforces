#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l,ma=INT_MAX,ind,c;
string s,t;
int a[1000000];
int main()
{
    cin>>n>>m;
    cin>>s>>t;
    for(i=0;i<=m-n;i++)
    {
        c=0;
        for(j=i,k=0;j<i+n;j++,k++)
        {
            //cout<<t[j];
            if(s[k]!=t[j])
            {
                c++;
               a[l]=k+1;
            }
            l++;
        }
       if(c<ma)
       {
           ma=c;
           ind=l-n;
       }
    }
    cout<<ma<<endl;
    for(i=ind;i<ind+n;i++)
    {
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
    cout<<endl;
}

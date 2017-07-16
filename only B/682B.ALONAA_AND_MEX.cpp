#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],ma=INT_MIN;
    for(int i=0;i<n;i++)
        {
            int x;
            cin>>a[i];
        }
        for(int i=0;i<n)
        for(int i=0;i<n;i++)
        {
            if(a[i]>ma)
                ma=a[i];
        }
        map<int ,int > r;
        for(int i=0;i<n;i++)
        {
           r[a[i]]=1;
        }
        int real_max=INT_MIN;
        for(int i=1;i<=ma;i++)
        {
            if((r[i]==0)&&i>real_max)
                real_max=i;
        }
        if(real_max==INT_MIN)
            real_max=ma+1;

    cout<<real_max<<endl;;




    return 0;
}

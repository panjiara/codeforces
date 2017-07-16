#include<bits/stdc++.h>
using namespace std;
 vector<int> v[200005];
int main()
{
    int n,k,i,j;
    long long int sum=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=1,j=0;
    while(i<n)
    {
        while(j<i)
        {
            if(a[j]*k==a[i])
            {
                v[j].push_back(i);
            }
            j++;
        }
        j=0;
        i++;
    }
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<v[i].size())
        {
            for(k=0;k<v[v[i][j]].size();k++)
            {
                if(v[i][j]<v[v[i][j]][k])
                    sum++;
            }
           j++;
        }
    }
    cout<<sum<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool used[1000001];
long long int m,n,d[1000001];
queue<long long int> Q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    Q.push(n);
    used[n]=true;
    while(!Q.empty())
    {
        int i=Q.front();
        Q.pop();
        if(used[2*i]==false&&i<=m)
        {
            used[2*i]=true;
            Q.push(2*i);
            d[i*2]=d[i]+1;
        }
        if(used[i-1]==false&&i-1>0)
        {

            used[i-1]=true;
            Q.push(i-1);
            d[i-1]=d[i]+1;
        }
        if(used[m]==true)
            break;
    }

    cout<<d[m]<<endl;
     return 0;
}

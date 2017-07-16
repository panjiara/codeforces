#include<bits/stdc++.h>
using namespace std;
long long int n,m,i,j,k,l;
long long int sum;
map<int,pair<long long int,long long int> > M;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
       M[i]=make_pair(pow(2,i-1),pow(2,i)) ;
    }
    map<int,pair<long long int,long long int> >::iterator it=M.begin();
    for(it;it!=M.end();it++)
    {
        pair<long long int,long long int > t;
        t=it->second;
        i=t.first;
        j=t.second;
        //cout<<i<< " " <<j<<endl;
        if((m-i)%j==0)
        {
            cout<<it->first<<endl;
            return 0;
        }


    }
    return 0;
}

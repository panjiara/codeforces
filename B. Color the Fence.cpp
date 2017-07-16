#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l;
vector<pair<int,int>> v;
bool comp(pair<int,int> &a,pair<int,int> &b)
{
    if(a.second<b.second)
        return 1;
    else if(a.second==b.second)
    {
        if(a.first>b.first)
            return 1;
        else
            return 0;
    }
    else if(a.second>b.second)
        return 0;

    if(a.first>b.first)
        return 1;
     else
        return 0;

}
int main()
{
    cin>>n;
    v.resize(9);
    for(i=0;i<9;i++)
    {
        cin>>k;
        v[i]={i+1,k};
    }
    sort(v.begin(),v.end(),comp);
   for(i=0;i<9;i++)
    {
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
    i=0;
    while(n!=0)
    {
        if(i==9)
            break;
        if(n-v[i].second>=0)
        {
            j=1;
            cout<<v[i].first;
            n-=v[i].second;
        }
        else
            i++;

    }
    if(j==0)
        cout<<-1<<endl;

    return 0;
}

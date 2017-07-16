#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v;
map<pair<int,int>,int> ma;
int n,m,i,j,k,l,x,y;
string s,p,t;
bool com(const pair<int,int> &a,const pair<int,int> &b)
{
    //cout<<a.first<<" "<<b.first<<endl;
    if(a.first>b.first)
    {
        return (a.first>b.first);
    }
    if(b.first>a.first)
        return 0;
    else if(a.first==b.first)
    {
        return (a.second<=b.second);
    }


}
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        ma[make_pair(x,y)]++;
        v.push_back(make_pair(x,y));
    }
    //cout<<"eeh"<<endl;
    sort(v.begin(),v.end(),com);
    cout<<ma[v[m-1]]<<endl;

    return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,j,k,i,l,b,maxv,maxh;
char c;
set<int> ver,hor;
vector<pair<int,int>> v;
vector<long long int> ans;
int main()
{
    cin>>b>>l>>n;
    v.resize(n);
    ver.insert(0),hor.insert(0),ver.insert(b),hor.insert(l);
    for(i=0;i<n;i++)
    {
        cin>>c>>k;
        if(c=='H')
        hor.insert(k),v[i]={0,k};
        else
        ver.insert(k),v[i]={1,k};
    }
    set<int>::iterator it=ver.begin(),ti=ver.end(),t;
    ti--;
    while(it!=ti)
    {
        t=it,t++;
        maxv=max(maxv,*t-*it);
        it=t;
    }
    it=hor.begin(),ti=hor.end();
    ti--;
    while(it!=ti)
    {
        t=it,t++;
        maxh=max(maxh,*t-*it);
        it=t;
    }
    ans.push_back((ll)(maxv)*maxh);
    for(i=n-1;i>=0;i--)
    {
        if(v[i].first==0)
        {
            //hor

            maxh=max(maxh,*hor.upper_bound(v[i].second)-({it=hor.lower_bound(v[i].second);it--;*it;}));
            hor.erase(v[i].second);
            cout<<*hor.upper_bound(v[i].second)<<" "<< v[i].second<<" "<<*it<<endl;
        }
        if(v[i].first==1)
        {
            //ver
            maxv=max(maxv,*ver.upper_bound(v[i].second)-({it=ver.lower_bound(v[i].second);it--;*it;}));
            ver.erase(v[i].second);
             cout<<*ver.upper_bound(v[i].second)<<"  "<< v[i].second<<" "<<*it<<endl;
        }
       ans.push_back((ll)maxv*maxh);
}
for(i=n-1;i>=0;i--)
{
    cout<<ans[i]<<endl;
}
    return 0;
}

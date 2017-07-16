#include<bits/stdc++.h>
#define X first
#define Y second
#define mp make_pair
#define pb push_back
using namespace std;
vector<pair<int,int>> p;
int n;
bool visited[105];
void visit(int ind)
{
    if(visited[ind])
        return ;
    visited[ind]=1;
    int i;
    for(i=0;i<n;i++)
    {
        if(p[i].X==p[ind].X||p[i].Y==p[ind].Y)
            visit(i);

    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   cin>>n;
   int i;
   for(i=0;i<n;i++)
   {
       int x,y;
       cin>>x>>y;
       p.pb(mp(x,y));
   }
    int ans=-1;
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            ans++;
            visit(i);
        }
    }
    cout<<ans<<endl;




    return 0;
}

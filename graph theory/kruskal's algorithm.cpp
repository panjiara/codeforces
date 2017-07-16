#include<bits/stdc++.h>
using namespace std;
#define edge pair<int,int>
#define MAX 1001
vector<pair<int,edge>> GRAPH,MST;
int parent[MAX],total,N,E;
int findset(int x,int *parent)
{
    if(x!=parent[x])
        parent[x]=findset(parent[x],parent);
    return parent[x];

}
void kruskal()
{
 int i,pu,pv;
 sort(GRAPH.begin(),GRAPH.end());
 for(i=total=0;i<E;i++)
 {
     pu=findset(GRAPH[i].second.first,parent);
     pv=findset(GRAPH[i].second.second,parent);
     if(pu!=pv)
     {
         MST.push_back(GRAPH[i]);
         total+=GRAPH[i].first;
         parent[pu]=parent[pv];

     }


 }
}
 void reset()
 {
     for(int i=1;i<=N;i++)
        parent[i]=i;
 }
  void print()
  {
      int i,sz;
      sz=MST.size();
      for(i=0;i<sz;i++)
      {
          cout<<MST[i].second.first;
          cout<<MST[i].second.second;
          cout<<endl<<MST[i].first;
        }
    cout<<total<<endl;
}

int main()
{
    int i,u,v,w;
    cin>>N>>E;
    reset();
    for(i=0;i<E;i++)
    {
        cin>>u>>v>>w;
        GRAPH.push_back(pair<int,edge>(w,edge(u,v)));
    }
    kruskal();
    print();
}

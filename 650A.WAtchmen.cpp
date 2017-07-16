#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<int,pair<int,int>> m;
    for(int i=0;i<n;i++)
    {
       int x,y;
       cin>>x>>y;
       m[i]=make_pair(x,y);
       pair<int ,int> d;
      d=m[i];
       //cout<<d.first<<" "<<d.second<<endl;

     }
     int res=0;
     for(int i=0;i<n-1;i++)
     {
          for(int j=i+1;j<n;j++)
          {
                 pair<int,int> s;
                 pair<int,int> t;
                 s=m[i];
                 t=m[j];
                 int x1,x2,y1,y2;
                x1=s.first;
               y1=s.second;
               x2=t.first;
               y2=t.second;
                 //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
              long double check1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
              long double check2=abs(x1-x2)+abs(y1-y2);
                 if(check1==check2)
                 res++;
          }
    }
    cout<<res<<endl;




  return 0;
}

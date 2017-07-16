#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    map<int ,int> S;
    map<int ,int> B;
    for(int i=0;i<n;i++)
    {
        char d;
        cin>>d;
        if(d=='B')
        {
            int x,y;
            cin>>x>>y;
            B[x]+=y;
        }
        else
        {
            int x,y;
            cin>>x>>y;
            S[x]+=y;
        }
    }
    int a=S.size(),b=B.size();
    int i=0;
    stack<pair<int,int>> temp1;
    queue<pair<int,int>> temp;

    if(a>0)
    {
        for(map<int,int>::iterator it=S.begin();it!=S.end();it++)
    {
        if(i==s)
            break;
        pair<int,int> t;
        int t1=it->first,t2=it->second;
        t=make_pair(t1,t2);
        temp1.push(t);
        i++;

    }
    for(int j=0;j<i&&j<a;j++)
    {
       pair<int,int> t;
       t=temp1.top();
       temp1.pop();
       cout<<"S "<<t.first<<" "<<t.second<<endl;
    }

    }

    i=0;
    if(b>0)
    {
        for(map<int,int>::iterator it=--(B.end());i<b&&i<s;it--)
    {
        pair<int,int> t;
        int t1=it->first,t2=it->second;
        t=make_pair(t1,t2);
     temp.push(t);
     i++;
    }
    for(int j=0;j<i&&j<b;j++)
    {
       pair<int,int> t;
       t=temp.front();
       temp.pop();
       cout<<"B "<<t.first<<" "<<t.second<<endl;
    }

    }




return 0;
}


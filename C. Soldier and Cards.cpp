#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,n,m,x,y,cnt;
queue<int> q1,q2;
int main()
{
    cin>>n;
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>l;
        q1.push(l);
    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>l;
        q2.push(l);
    }
    while(!q1.empty()&&!q2.empty())
    {
       x=q1.front();
       y=q2.front();
       q1.pop();
       q2.pop();
       if(x>y)
       {
           q1.push(y);
           q1.push(x);
        }
        else
        {
            q2.push(x);
            q2.push(y);
        }
        cnt++;
        if(cnt>100000)
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<cnt<<" ";
    cout<<(q1.empty()?2:1)<<endl;
    return 0;
}

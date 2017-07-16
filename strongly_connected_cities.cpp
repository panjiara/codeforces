#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,k,l,flag;
char x,y,z,w;
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        if(!i)
            cin>>w;
        else
            cin>>x;
    }
    for(i=0;i<m;i++)
    {
      if(!i)
            cin>>y;
      else
        cin>>z;
    }
    if(w=='<'&&x=='>'&&y=='v'&&z=='^')
    {
        cout<<"YES";
        return 0;
    }
    else if(w=='>'&&x=='<'&&y=='^'&&z=='v')
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
        return 0;
    }

}

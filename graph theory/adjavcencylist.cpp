#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<list<int>> v(n);
    for(int i=0;i<n;i++)
    {
        cout<<"enter the number of nodes connected to "<<i<<endl;
        int x;
        cin>>x;
        while(x--)
        {
            cout<<"enter the nodes of  "<<i<<endl;
            int y;
            cin>>y;
            v[i].push_back(y);
            //v[y].push_back(i);
      }
    }
      int c=0;
    for(vector<list<int>>::iterator it=v.begin();it!=v.end();it++)
    {
        list<int> il=*it;
        cout<<"nodes connected to the "<<c<<"are::";
        for(list<int>::iterator t=il.begin();t!=il.end();t++)
        {

            cout<<*t<<"  ";

        }
        cout<<endl;

       c++;
    }
return 0;
}

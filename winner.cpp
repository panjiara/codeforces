#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
vector<string> v;
int main()
{
    int n,i,j,k=INT_MIN,l,flag;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        cin>>j;
        m[s]+=j;
        v.push_back(s);

    }
    map<string,int>::iterator it=m.begin();
    flag=0;
    for(it;it!=m.end();it++)
    {
        if(k==it->second)
        {
            flag=1;
        }
        if(k<it->second)
        {
            k=it->second;
            s=it->first;
        }
    }
    if(flag==1)
    {
        cout<<s<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l;
string s;
vector<string> v;
map<string ,int> m;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>s;
        cin.get();
       v.push_back(s);

    }
    vector<string>::iterator it=--(v.end());
    for(it;it>=v.begin();it--)
    {
        if(m[*it]==0)
        {
            cout<<*it<<endl;
            m[*it]=1;
        }
    }
    return 0;
}

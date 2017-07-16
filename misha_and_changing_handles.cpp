#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    vector<list<string>> v(n);
    for(int j=0;j<n;j++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int flag=0;
        for(int k=0;k<i;k++)
        {
            list<string>::iterator it=--(v[k].end());
            if(*it==s1)
            {
               v[k].push_back(s2);
               flag=1;
               break;
            }
        }
        if(flag==0)
        {
            v[i].push_back(s1);
            v[i].push_back(s2);
            i++;
        }
    }
    cout<<i<<endl;
    for(int m=0;m<i;m++)
    {
        list<string>::iterator it=v[m].begin();
        cout<<*it<<" ";
        it=--(v[m].end());
        cout<<*it<<endl;
    }
return 0;
}

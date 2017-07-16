#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> m;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,j=0,k=0;
    for(i=0;i<n;i++)
    {
        m[s[i]]++;

    }
    for(char as='a';as<='z';as++)
    {
        if(m[as]!=0)
        {
            j++;
            //cout<<as<<"  "<<m[as]<<endl;
           k+=(m[as]-1);
        }
    }
    if(k>=26||(26-j)<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<k<<endl;
    return 0;
}

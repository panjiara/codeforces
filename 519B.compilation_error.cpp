#include<bits/stdc++.H>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=3;
    map<int,int> m;
    map<int,int> c;
    int z=0;
    while(t--)
    {
        int temp=n;
        z--;
        while(temp--)
        {
            int x;
            cin>>x;
            ++m[x];
            if(t==2)
            {
               ++c[x];
               cout<<c[x]<<endl;
            }
            else
            {
                cout<<m[x]<<endl;
            }


        }
        cout<<"----"<<endl;
        n--;
    }
    map<int,int>::iterator it,tp;
    for(it=m.begin(),tp=c.begin();it!=m.end();it++)
    {
        if((it->second)!=(tp->second)*3)
           cout<<it->first<<endl;


    }



    return 0;
}

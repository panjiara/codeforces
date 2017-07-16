#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l=0,j,ok=0,rk=0,on=0,gn=0;
    string org,rec;
    cin>>org>>rec;
    n=org.length();
    for(i=0;i<n;i++)
    {
        if(org[i]=='+')
         ok++;
        if(org[i]=='-')
        on++;
        if(rec[i]=='+')
        rk++;
        if(rec[i]=='-')
        gn++;
        if(rec[i]=='?')
        l++;
    }
    if(ok+on==rk+gn)
    {
       cout<<"1.000000000000"<<endl;
       return 0;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l,flag=0,a,b;
string s;
int main()
{
    cin>>s;
    n=s.length();
    for(i=0;i<s[i];i++)
    {
        if(s[i]==s[i+1])
        {
            flag=1;
        }
        if(s[i]=='+')
            a++;
        if(s[i]=='-')
            b++;
    }
    if((a==n||b==n)&&(n%2!=0))
  {

  cout<<"No"<<endl;
  return 0;
  }
if(flag==1)
{
    cout<<"Yes"<<endl;
}
else
    cout<<"No"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int flag1=0,flag2=0,flag3=0,flag4=0;
    for(int i=0;i<l;)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&flag1==0)
        {
           flag1=1;
           i=i+2;
        }
         else if(s[i]=='B'&&s[i+1]=='A'&&flag2==0)
          {
               flag2=1;
               i=i+2;
          }
          else
            i++;


    }
    if(flag1==1&&flag2==1)
        flag3=1;
   flag1=0,flag2=0;
    for(int j=l-1;j>=0;)
    {
        if(s[j]=='A'&&s[j-1]=='B'&&flag1==0)
        {
           flag1=1;
           j=j-2;
        }
         else if(s[j]=='B'&&s[j-1]=='A'&&flag2==0)
          {
               flag2=1;
               j=j-2;
          }
          else
            j--;
    }
    if(flag1==1&&flag2==1)
        flag4=1;
    if(flag3==1||flag4==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

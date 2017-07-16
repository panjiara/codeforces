#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=(s[0]-'0')*10+s[1]-'0';
    int y=(s[3]-'0')*10+s[4]-'0';
    if(x<10&&x>0)
        {
            if(x*10-y<0)
                cout<<60-y+(x*10)<<endl;
            else
                cout<<x*10-y<<endl;
        }
   if(x>10&&x<23)
   {
       if(((s[1]-'0')*10+s[0]-'0')-y<0)
       {
           cout<<60-y+((s[1]-'0')*10+s[0]-'0')<<endl;
       }
       else
          cout<<((s[1]-'0')*10+s[0]-'0')-y<<endl;
   }
   if(x==23)
   {
       if(y<=32)
        cout<<32-y<<endl;
       if(y>32)
       {
           cout<<22*60+(60-y)+32<<endl;
       }
   }
   if(x==0)
   {
       cout<<60-y+(23*60)<<endl;
   }

        return 0;
}

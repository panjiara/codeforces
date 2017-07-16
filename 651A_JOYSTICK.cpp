#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    int count=0;
    while((a>=1||b>=1)&&(a+b>=3))
    {
        count++;
        if(a==2&&b==2)
            break;
        cout<<a<<" " <<b<<endl;
        if(a>b)
        {
         b++;
         a-=2;
        }
        else
        {
          a++;
          b-=2;
        }



    }
    cout<<count<<endl;




    return 0;
}

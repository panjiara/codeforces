#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int count=0;
    while(temp)
    {
        if(temp>=5)
        {
            temp-=5;
            count++;
            continue;
        }
         if(temp>=4)
        {
            temp-=4;
            count++;
            continue;
        }
         if(temp>=3)
        {
            temp-=3;
            count++;
            continue;
        }
         if(temp>=2)
        {
            temp-=2;
            count++;
            continue;
        }
         if(temp>=1)
        {
            temp-=1;
            count++;
            continue;
        }
    }

    cout<<count<<endl;


    return 0;
}

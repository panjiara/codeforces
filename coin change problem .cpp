#include<bits/stdc++.h>
using namespace std;
int a[3];
map<int,int> m;
int coin(int n)
{
    int ma=INT_MAX;
    cout<<n<<endl;
    if(n<=0)
        return 0;
    else
    {
        for(int i=0;i<3;i++)
        {

            if(m[n-a[i]]!=0)
            {
                ma=1+m[n-a[i]];
            }
            else if (n-a[i]<0)
                continue;
            else
            {

                ma=min(coin(n-a[i])+1,ma);
            }
          cout<<n<<" " <<ma<<endl;

        }

    }
    m[n]=ma;
    return ma;
}
int main()
{
    a[0]=1,a[1]=10,a[2]=11;
    coin(15);
    cout<<m[15]<<endl;




    return 0;
}

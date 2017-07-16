#include<bits/stdc++.h>
using namespace std;
int v;
int a[10];
int fence(int n)
{
    if(n<=0)
      return  0;
    else
    {
        int ma=INT_MIN;
        for(int i=9;i>=0;i--)
        {
           ma=max(ma,fence(n-a[i]));
        }
        cout<<ma;
        return ma;
    }


}
int main()
{

    cin>>v;
    int i;
    for(i=1;i<10;i++)
        cin>>a[i];
    fence(v);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int digit=0;
    int copy=n;
    while(copy)
    {
        copy/=10;
        digit++;
    }
   // cout<<digit<<endl;
   long long int temp1,temp2,sum=0,x;
    for(int i=digit;i>0;i--)
    {

       temp1=pow(10,i-1)-1;
   // cout<<temp1<<endl;
       if(i==digit)
       {
           temp2=(n-temp1)*i;
          // cout<<temp2<<endl;
           sum+=temp2;

       }
        if(i!=digit)
        {
        temp2=(x-temp1)*i;
        //cout<<temp2<<endl;
        sum+=temp2;
        }

       x=temp1;

    }
    cout<<sum<<endl;



    return 0;
}

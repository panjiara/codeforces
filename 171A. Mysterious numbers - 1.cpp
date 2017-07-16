#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
   int t=0;
   int count1=0,count2=0;

   while(m>0)
   {
       t=m%10+t*10;
       m=m/10;
       count1++;
    }

    cout<<t+n<<endl;





    return 0;
}

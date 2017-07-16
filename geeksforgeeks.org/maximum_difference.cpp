#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   int maxx=INT_MIN,index=0;
   for(int i=0;i<n;i++)
   {

       if(a[i]>maxx)
       {
           maxx=a[i];
           index=i;
       }

   }
    int diff=INT_MIN;
    for(int i=0;i<index;i++)
   {
       if(a[index]-a[i]>diff)
        {
           diff=a[index]-a[i];
        }
    }
    cout<<diff<<endl;




    return 0;
}

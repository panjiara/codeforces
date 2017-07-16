#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int sum=0;
     for(int i=n-1;i>=0;i--)
     {
        cout<<a[i]<<endl;
         if(sum+a[i]>sum)
         {

              sum+=a[i];
              cout<<sum<<endl;
         }


     }
    cout<<sum<<endl;



    return 0;
}

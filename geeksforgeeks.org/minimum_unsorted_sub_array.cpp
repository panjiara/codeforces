#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max_till=INT_MIN;
    int index_start=0,last_index=0;
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]&&flag==0)
        {
            index_start=i;
            flag=1;
             if(a[i]>max_till)
            max_till=a[i];

        }
        if((a[i]>a[i+1]&&flag==1)||a[i]<max_till)
        {
            last_index=i;
            if(a[i]>max_till)
            max_till=a[i];

        }
    }
    cout<<index_start<<" " <<last_index<<endl;




    return 0;
}

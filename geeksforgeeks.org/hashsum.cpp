#include<bits/stdc++.h>
using namespace std;
bool s[10000000];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum;
    cin>>sum;
    int flag=0;
    for(int i=0;i<n;i++)
    {
    int temp=sum-a[i];
        if(temp>=0&&s[temp]==1)
        {
            flag=1;
            cout<<sum<<" "<<a[i]<<" "<<temp<<endl;

        }
        s[a[i]]=1;


    }
if(flag==0)
    cout<<"not found"<<endl;



    return 0;
}

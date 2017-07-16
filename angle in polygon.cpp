#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long n;
    long long a,temp,tempo=9999999;
    cin>>n>>a;
    float mini=(180*(n-2))/n;
    float start=mini/(n-2);
    float arr[n-2];
    for(int i=0;i<n-2;i++)
    {
        arr[i]=start+i*start;
       // cout<<arr[i]<<"\t";
    }//cout<<"\n";
    for(int i=0;i<n-2;i++)
    {
        if((abs(arr[i]-a))<temp)
        {
            tempo=i;
            temp=abs(arr[i]-a);
        }
    }
    //cout<<temp<<"\n"<<tempo<<"\n";
    cout<<"1 2 "<<n-tempo<<"\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int l,int h,int key)
{
    if(l>h)
        return -1;
    int mid=(l+h)/2;
    if(a[mid]==key)
        return mid;
    if(a[mid]<key)
        l=mid+1;
        if(a[mid]>key)
            h=mid-1;
        return binary(a,l,h,key);


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    int x=binary(a,0,n-1,key)  ;
    if(x==-1)
        cout<<"notfound"<<endl;
    else
        cout<<x+1<<endl;

    return 0;

}

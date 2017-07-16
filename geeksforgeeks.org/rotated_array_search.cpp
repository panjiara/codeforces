#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int l,int h,int key)
{

  for(int i=l;i<h;i++)
  {
    int mid=(l+h)/2;
    if(l>h)
    return -1;
    if(a[mid]==key)
    return mid;
    if(a[mid]<key)
    l=mid+1;
    if(a[mid]>key)
    h=mid-1;
    return binary(a,l,h,key);
  }


}
int main()
{
int n ;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int key;
cin>>key;
int pivot=n-1;
for(int i=0;i<n-1;i++)
{
  if(a[i]>a[i+1])
  {
    pivot=i;
    break;
  }
}

int x=binary(a,0,pivot,key);
int y=binary(a,pivot+1,n,key);
if(x>0)
cout<<x<<endl;
else
cout<<y<<endl;



  return 0;
}

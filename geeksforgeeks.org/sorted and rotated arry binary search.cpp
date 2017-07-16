8#include<bits/stdc++.h>
using namespace std;
int findmin(int a[],int l,int h)
{
   if(l>h)
   return a[0];
   if(l==h)
   return a[l];
   int mid=(l+h)/2;
   if(mid<h&&a[mid]>a[mid+1])
   return a[mid+1];
   if(mid>l&&a[mid]<a[mid-1])
   return a[mid];
   if(a[h]>a[mid])
   return findmin(a,l,mid-1);
    return findmin(a,mid+1,h);



}
int main(int argc, char const *argv[]) {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int l=0,r=n-1;
cout<<findmin(a,0,n-1);


  return 0;
}

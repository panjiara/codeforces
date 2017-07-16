#include<bits/stdc++.h>
using namespace std;
int search(int a[],int key,int n)
{
      for(int i=0;i<n;i++)
      {
          if(a[i]==key)
            return i;
    }
    return -1;


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
    int x;
    x=search(a,key,n);
    if(x==-1)
        cout<<"not found"<<endl;
        else
            cout<<x<<endl;






}


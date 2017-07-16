#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int m;
cin>>m;
while(m--)
{
int c;
cin>>c;
if(c)
{
int x,y;
cin>>x>>y;
x--;
int maxx=INT_MIN;
for(int i=x;i<y;i++)
{
  if(a[i]>maxx)
  maxx=a[i];
}
cout<<maxx<<endl;
}
else
{
  int x,y;
  cin>>x>>y;
  a[x-1]=y;
}



}
  return 0;
}

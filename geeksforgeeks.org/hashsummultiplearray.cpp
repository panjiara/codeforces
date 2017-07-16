#include<bits/stdc++.h>
using namespace std;
bool sa[10000001];
bool sb[10000001];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
   int  b[m];
   for(int i=0;i<m;i++)
    cin>>b[i];
    int sum;
    cin>>sum;
    for(int i=0;i<m;i++)
    {

        sb[b[i]]=1;
    }
   for(int i=0;i<n;i++)
   {
       int temp=sum-a[i];
       if(temp>=0&&sb[temp]==1)
       {
           cout<<sum<<" "<<a[i]<<" "<<temp<<endl;
       }
       sa[a[i]]=1;

   }
   unordered_set <int> s;
   for(int i=0;i<m;i++)
    s.insert(b[i]);
for(int i=0;i<n;i++)
{
    int temp=sum-a[i];
    if((s.find(temp))!=s.end())
    {
        cout<<sum<<" "<<a[i]<<" " <<temp<<endl;
    }
}




    return 0;
}




#include<bits/stdc++.h>
using namespace std;
int n;
int total=0;
void f(int k, string s[],int a[])
{
    if(k==n)
        return;
    if(s[k]<s[k+1])
        f(k+1,s,a);
    if(s[k]>s[k+1])
    {
        reverse(s[k].begin(),s[k].end());
        reverse(s[k+1].begin(),s[k+1].end());
        if(s[k]>s[k+1])
        {
            cout<<-1<<endl;
            return;
        }
        else if(s[k]<s[k+1])
        {
            total+=a[k];

        }
    }
}
int main()
{

int a[n],i;
string s[n];
cin>>n;
for(i=0;i<n;i++)
    cin>>a[i];
for(i=0;i<n;i++)
{

   cin>>s[i];
}

f(0,s,a);
cout<<total<<endl;
return 0;
}

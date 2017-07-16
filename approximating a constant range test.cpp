#include<bits/stdc++.h>
using namespace std;
int n;
multiset<int> curr;
int main()
{
int i,l=0,ans=2;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
if(n<=2)
{
    cout<<n<<endl;
    return 0;
}
for(i=0;i<n;i++)
{
    curr.insert(a[i]);
    while(abs(*curr.begin()-*curr.rbegin())>1)
    {
        curr.erase(curr.find(a[l]));
        l++;
    }
    ans=max(ans,(int)curr.size());
}
 cout<<ans<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,d;
int ans=0;
void tree(int x,int sum)
{
    cout<<x<<" "<<sum <<endl;
    if(sum>m)
    {

    cout<<"khatam hua ik tree"<<endl;
        return ;
    }
    for(int i=x;i<=n;i++)
    {
         sum+=i;
        tree(i,sum+i);
    }
    if(sum==m)
        ans++;
}
int main()
{

    cin>>n>>m>>d;
    tree(1,0);
    cout<<" "<<ans<<endl;

}

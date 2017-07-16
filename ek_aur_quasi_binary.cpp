#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> num;
int m[1000005];
int n,mini;
int DP(int sum)
{
    //cout<<sum<<endl;
    if(sum==n)
        return 0;
    if(m[sum]!=-1)
        return m[sum];
    int res=1<<28;
    for(int i=0;i<num.size();i++)
    {
        if(sum+num[i]<=n)
            res=min(DP(sum+num[i])+1,res);
    }
    return m[sum]=res;
}
int sum2;
void solve (int sum)
{
    if(sum==0)
        return ;
    for(int i=0;i<num.size();i++)
    {
        if(sum+num[i]<=n)
        {
            if(m[sum]==m[sum+num[i]]+1)
            {
                cout<<num[i]<<" ";
                sum2+=num[i];
                solve(sum+num[i]);
                return;
            }
        }
    }
}

int main()
{
    cin>>n;
    num.pb(1);
    int i=1,j=0;
    while(i<=100000)
    {
        int s=num.size();
        i*=10;
        if(i>100000)
            break;
        num.pb(i);
        for(int g=0;g<s;g++)
        {

            if(num[num.size()-1]>=100000)
            {
              j=1;
              break;
            }
            num.pb(i+num[g]);
        }
         if(j==1)
            break;
    }

    for(j=0;j<=n;j++)
        m[j]=-1;
        reverse(num.begin(),num.end());
  mini=DP(0);
  cout<<endl;
  cout<<mini<<endl;
  solve(0);
  cout<<n-sum2<<endl;




    return 0;
}

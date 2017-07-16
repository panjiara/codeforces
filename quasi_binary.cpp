#include<bits/stdc++.h>
using namespace std;
vector<int> v;
#define pb push_back
int  m[1000005];
int actual;
int sum2;
int  coin(int n)
{
    int ma=INT_MAX;
    //cout<<n<<endl;
    if(n<=0)
        return 0;
    else
    {
        for(int i=0;i<v.size();i++)
           {
              if(m[n-v[i]]!=0)
               {
                  ma=m[n-v[i]]+1;
                }
            else if(n-v[i]<0)
                continue;
             else
                 ma=min(coin(n-v[i])+1,ma);

            }
           // cout<<n<<" " <<ma<<endl;
    }
    m[n]=ma;
    cout<<m[n]<<endl;
    return ma;

}
void general(int sum)
{
    cout<<sum<<"sum hai ye"<<endl;
    if (sum==actual)
        return ;
      cout<<"aya"<<endl;
    for(int i=0;i<=v.size();i++)
    {
        if(sum+v[i]<=actual)
        {
            cout<<"yah"<<endl;
            if(m[sum]==m[sum+v[i]]+1)
            {
                cout<<"d"<<endl;
                cout<<v[i]<<" ";
                sum2+=v[i];
                general(sum+v[i]);
                return ;
            }
        }
    }
}
int main()
{
   int n;
    cin>>n;
   actual=n;
   cout<<actual;
    int i=1,j=0;
    v.pb(1);
    while(i<=100000)
    {
        int s=v.size();
        i*=10;
        if(i>n)
            break;
        v.pb(i);
        for(int g=0;g<s;g++)
        {

            if(v[v.size()-1]>=n)
            {
              j=1;
              break;
            }
            v.pb(i+v[g]);
        }
         if(j==1)
            break;
    }
    reverse(v.begin(),v.end());
    coin(n);
    general(0);
    cout<<m[0]<<"check"<<endl;
     cout<<endl;
     for(int g=0;g<=actual;g++)
        cout<<m[g]<<"  ";
    cout<<endl;





    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,k,a,b,ans,counter;
string S;
int main()
{
    ios_base::sync_with_stdio(false);

cin>>n>>k>>S;
for(int i=0;i<n;i++)
{
    if(S[i]=='a')
        a++;
    else
        b++;
if(min(a,b)>k)
{
    if(S[counter]=='a')
        a--;
    else
        b--;
    counter++;


}
    ans=max(ans,a+b);



}

  cout<<ans<<endl;




    return 0;

}

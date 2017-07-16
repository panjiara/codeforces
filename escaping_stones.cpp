#include<bits/stdc++.h>
using namespace std;
vector<int> R,L;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,k,l;
   /* char T[1000005];
    scanf("%s",T);

    n=strlen(T);*/
    string T;
    cin>>T;
    n=T.length();
    //cout<<"check"<<endl;
    for(i=0;i<n;i++)
    {
        if(T[i]=='r')
            R.push_back(i+1);
        else
            L.push_back(i+1);
    }
    for(i=0;i<R.size();i++)
        printf("%d\n",R[i]);
    for(i=L.size()-1;i>=0;i--)
        printf("%d\n",L[i]);
    return 0;
}

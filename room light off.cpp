#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int c[n]={0};
   char a[n][m+2];
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       for(int j=0;j<m+2;j++)
       {
           if(s[j]=='1')
            c[i]++;
           a[i][j]=s[j];
       }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m+2;j++)
        {

            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
    int sum_crawler=0
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        int flag=0;
        if(c[i]==0)
        {
           sum++;
        continue;
        }
        for(j;j<m+2;j=(j+1)%(m+2))
        {

            if(j>=(m+2)/2&&c[i]==0)



        }




    }



    return 0;
}

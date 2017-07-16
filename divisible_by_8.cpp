#include<bits/stdc++.h>
using namespace std;
string s;
string w="00";
int main()
{
   cin>>s;
   w+=s;
   int l=w.length();
   for(int i=0;i<l;i++)
   {
       for(int j=i+1;j<l;j++)
       {
           for(int k=j+1;k<l;k++)
           {
               int temp=(w[i]-'0')*100+(w[j]-'0')*10+(w[k]-'0')*1;
               if(temp%8==0)
               {
                   cout<<"YES"<<endl;
                   cout<<temp<<endl;
                   return 0;
               }


           }
       }


   }
   cout<<"NO"<<endl;
   return 0;



}

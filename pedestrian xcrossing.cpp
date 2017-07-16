#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4]={0};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }

    }
     for(int i=0;i<4;i++)
     {
         if(a[i][3]==1)
         {
             for(int j=0;j<3;j++)
             {
                 if(a[i][j]==1)
                 {
                     //cout<<"----"<<endl;
                     cout<<"YES"<<endl;
                     return 0;
                 }

             }
             int c=0;
             for(int j=(i+1)%4;c<3;j=(j+1)%4)
             {
                 //cout<<c<<endl;
                 if(a[j][c]==1)
                 {

                     cout<<"YES"<<endl;
                     return 0;
                 }
                 c++;

             }

         }


     }
    cout<<"NO"<<endl;



    return 0;
}

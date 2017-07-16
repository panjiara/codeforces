#include<bits/stdc++.h>
using namespace std;
 int B[5];
int main()
{
    int a,b,c,d,n;
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
    {
            if(A[i]==1)
            B[1]++;
            if(A[i]==2)
            B[2]++;
            if(A[i]==3)
            B[3]++;
            if(A[i]==4)
            B[4]++;


    }
    sort(A,A+n);
    int taxi=0;
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]==4&&B[4]>0)
        {
           taxi++;
           B[4]--;
        }
         if(A[i]==3&&B[3]>0)
         {
             taxi++;
             if(B[1]>0)
                B[1]--;
             B[3]--;

         }
        if(A[i]==2&&B[2]>0)
        {
            taxi++;
            B[2]--;
            if(B[2]>0)
            {
              B[2]--;
            }
            else if(B[1]>0)
            {
                B[1]--;
                if(B[1]>0)
                {
                    B[1]--;
                }
            }
        }
        if(A[i]==1&&B[1]>0)
        {
           taxi++;
           B[1]--;
           if(B[1]>0)
           {
               B[1]--;
               if(B[1]>0)
               {
                   B[1]--;
                   if(B[1]>0)
                   {
                       B[1]--;;
                   }
               }
           }

        }



    }
    cout<<taxi<<"\n";


    return 0;
}

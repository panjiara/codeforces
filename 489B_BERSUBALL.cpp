#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
 int  A[n];
 for(int i=0;i<n;i++)
    cin>>A[i];
 int m;
 cin>>m;
 int  B[m];
 for(int i=0;i<m;i++)
    cin>>B[i];
    int count=0;
    sort(A,A+n);
    sort(B,B+m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((B[j]==A[i]||B[j]==A[i]+1||B[j]==A[i]-1)&&(A[i]!=INT_MAX||B[j]!=INT_MAX))
            {
                B[j]=INT_MAX;
                A[i]=INT_MAX;
                count++;
            }




        }



    }
    cout<<count<<endl;





    return 0;
}

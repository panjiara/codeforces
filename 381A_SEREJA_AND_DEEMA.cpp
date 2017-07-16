#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++)
        cin>>A[i];
  int flag=0;
  int S=0,D=0;
  int x=0,y=n-1;
  int count=0;
  while(count<n)
  {
    if(flag==0)
    {
        if(A[x]>A[y])
        {
            S+=A[x];
            //cout<<"S"<<A[x]<<endl;
            x++;
            count++;
        }
        else
        {
            S+=A[y];
            //cout<<"S"<<A[y]<<endl;
            y--;
            count++;
        }
        flag=1;

    }
    else
    {
        if(A[x]>A[y])
        {
            D+=A[x];
            //cout<<"D"<<A[x]<<endl;
            x++;
            count++;
        }
        else
        {
            D+=A[y];
            //cout<<"D"<<A[y]<<endl;
            y--;
            count++;
        }
        flag=0;

    }






  }
   cout<<S<<" "<<D<<endl;



    return 0;
}

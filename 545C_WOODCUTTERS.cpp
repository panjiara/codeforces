#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[2][n];
    int count;
    if(n>1)
    {
      count=2;
    }
    else
        count=1;
    for(int i=0;i<n;i++)
    {
        cin>>A[0][i];
        cin>>A[1][i];
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<A[0][i]<<"  "<<A[1][i]<<endl;
    }*/
    int x=A[0][0],y=A[0][2];
      for(int i=1;i<n-1;i++)
    {
        int flag=0;
          if(A[0][i]-A[1][i]>A[0][i-1]&&A[0][i]-A[1][i]>x)
          {
             // cout<<"L"<<endl;
          count++;
          x=A[0][i];
          y=A[0][i+2];
          flag=1;
          }
          else if(A[1][i]+A[0][i]<A[0][i+1]&&A[1][i]+A[0][i]<y)
          {
              //cout<<"R"<<endl;
            count++;
            x=A[1][i]+A[0][i];
            y=A[0][i+2];
            flag=1;
          }
          if(flag==0)
          {
              x=A[0][i];
              y=A[0][i+2];
          }
    }
          cout<<count<<endl;




    return 0;
}

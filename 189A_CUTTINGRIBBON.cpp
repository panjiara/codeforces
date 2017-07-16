#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N,a,b,c;
   cin>>N>>a>>b>>c;
   int A[N+1];
   int flag=0;
   A[0]=0;
   for(int i=1;i<N+1;i++)
   {
        flag=0;
        A[i]=0;
       if(i>=a&&A[i-a]+1>A[i]&&A[i-a]!=INT_MAX)
       {
           A[i]=A[i-a]+1;
           flag=1;
    }
     if(i>=b&&A[i-b]+1>A[i]&&A[i-b]!=INT_MAX)
        {
            A[i]=A[i-b]+1;
            flag=1;
       }
     if(i>=c&&A[i-c]+1>A[i]&&A[i-c]!=INT_MAX)
         {
             A[i]=A[i-c]+1;
             flag=1;
        }
         if(flag==0)
            A[i]=INT_MAX;

}
   cout<<A[N]<<endl;



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n;

int main()
{
cin>>n;
while(n)
{
  string S;
  cin>>S;
  int count=0;
  int index=0;
  int A[6];
  for(int i=1;i<=12;i++)
  {
           if(12%i==0)
            {
              int j=0;
          for(int k=0;k<12/i;k++)
          {
              int c=0;
               j=k;
              for(int m=0;m<=i;m++)
              {
                  if(S[j]=='X')
                    c++;
                    j=j+(12/i);
              }

                if(c==i)
                 {
                    A[index++]=i;
                      count++;
                      break;
                 }

          }


}

}

  sort(A,A+index);
  if(count==0)
    cout<<"0"<<endl;
  else
  {
cout<<count<<" ";
  for(int i=0;i<index;i++)
  {

      cout<<A[i]<<"x"<<12/A[i]<<" ";
      //
  }
   cout<<endl;
  }
n--;;
}
return 0;
}




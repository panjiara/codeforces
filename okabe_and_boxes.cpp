#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,l,x,r,a;
string s;
int arr[300010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    r=1;
    a=1;
    j=0;
    for(i=0;i<2*n;i++)
    {
        cin>>s;
        if(s=="add")
        {
            cin>>x;
            arr[j]=x;
            a=arr[j];
            j++;
            //cout<<"add_r   "<<r<<"   "<<a<<endl;
        }
        else
        {
          if(r!=a)
          {
             //cout<<"if_r"<<r<<"   "<<a<<endl;
              k++;
              r++;
             j=0;

              //cout<<"if_r _after"<<r<<"   "<<a<<endl;
          }
          else
          {

              //cout<<"else   "<<r<<"  "<<a<<endl;
              r++;
              j--;
              if(j-1>=0)
              a=arr[j-1];
              else
                a=r;

          }


        }
        cin.get();
    }
    cout<<k<<endl;
    return 0;
}

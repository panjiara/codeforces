#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  x;
    cin>>x;
    int flag=0;
    for(int i=0;i<x.length()-3;)
    {
        if(x[i]=='W'&&x[i+1]=='U'&&x[i+2]=='B')
        {
            if(flag==1)
                cout<<" ";
           i=i+3;
           flag=0;
            continue;
        }
        else
        {
          cout<<x[i];
          i++;
          flag=1;
        }

    }
cout<<endl;


    return 0;
}


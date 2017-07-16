#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int> s ;
    int count=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s.find(a[i]*a[j])!=s.end())
                {
                   count++;
                   cout<<i<<" :" <<j<<"  "<<a[i]*a[j]<<endl;

                }
                 else
                {
                    cout<<i<<" :" <<j<<"  "<<a[i]*a[j]<<endl;
                    s.insert(a[i]*a[j]);
                }



            }


        }
        cout<<count<<endl;


    return 0;
}

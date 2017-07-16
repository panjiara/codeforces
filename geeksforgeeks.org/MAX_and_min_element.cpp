#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='W')
            v[i]=0;
            if(s[i]=='B')
            v[i]=5;
        }
        int coun=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==5)
            {
                if(v[i-1]!=5&&v[i-1]==0&&i>0)
                {
                    coun++;
                   v[i-1]=1;
                }
                if(v[i-2]!=5&&v[i-2]==0&&i>1)
                {
                    coun++;
                   v[i-2]=1;
                }
                if(v[+1]!=5&&v[i+1]==0&&i<n-1)
                {
                    coun++;
                   v[i+1]=1;
                }
                if(v[i+2]!=5&&v[i+2]==0&&i<n-2)
                {
                    coun++;
                   v[i+2]=1;
                }

            }

        }
        cout<<coun<<endl;


    }
    return 0;
}

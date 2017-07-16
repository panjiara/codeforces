#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int fs,ss=fs=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<fs){
            ss=fs;
            fs=a[i];
        }
        else if(a[i]<ss&&a[i]!=fs)
            ss=a[i];
    }
    cout<<fs<<" "<<ss<<endl;



    return 0;

}

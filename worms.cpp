#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
vector<pair<int,int>> v;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j=1;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
        cin>>b[i];

    for( i=0;i<n;i++)
    {
       pair<int,int> x=mp(j,j+a[i]-1);
       v.push_back(x);
       j+=a[i];
    }
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }*/
    int x,l,r,mid;
    for(i=0;i<m;i++)
    {
        x=b[i];
        l=0;
        r=n-1;
        while(l<=r)
        {
            //cout<<l<<" "<<r<<endl;
            mid=(l+r)/2;
            if(v[mid].first<=x&&x<=v[mid].second)
            {
                cout<<mid+1<<endl;
                break;
            }
            else if(x<v[mid].first)
            {
                r=mid;
            }
            else if(x>v[mid].second)
            {
                l=mid+1;
            }
        }

}


    return 0;
}

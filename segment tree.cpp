#include<bits/stdc++.h>
using namespace std;
#define  E cout<<endl
int arr[100],seg_tree[100];
void make_tree(int low,int high,int pos)
{
    cout<<low<<" "<<high<<endl;
    if(low==high)
    {
         seg_tree[pos]=arr[low];
         cout<<seg_tree[pos]<<endl;

    }
    else
    {
    int mid=(low+high)/2;
    make_tree(low,mid,2*pos+1);
    make_tree(mid+1,high,2*pos+2);
    seg_tree[pos]=min(seg_tree[2*pos+1],seg_tree[2*pos+2]);
}
return ;
}
int range(int ql,int qh,int low,int high,int pos)
{
    if(qh<low||ql>high)//no overlap
        return INT_MAX;
    if(ql<=low&&qh>=high)//total overlap
        return seg_tree[pos];
   int mid=(low+high)/2;
    return min(range(ql,qh,low,mid,2*pos+1),range(ql,qh,mid+1,high,2*pos+2));


}
int main()
{
    int n,i,m;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    if(n%2==0)
        m=2*n-1;
    else
    {
        m=(n/2+1)*n-1;
    }
    cout<<m<<endl;
    for(i=0;i<m;i++)
        seg_tree[i]=INT_MAX;
    make_tree(0,n-1,0);
    for(i=0;i<m;i++)
    cout<<seg_tree[i]<<" ";
    E;
    int q,x,y,z;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        z=range(x,y,0,n-1,0);
        cout<<z;
        E;
    }


    return 0;
}

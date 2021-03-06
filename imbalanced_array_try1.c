#include<stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
long long int arr[10000001],seg_tree[10000001],seg_treep[10000001];
void make_tree(int low,int high,int pos)
{
   // cout<<low<<" "<<high<<endl;
    if(low==high)
    {
         seg_tree[pos]=arr[low];
         //cout<<seg_tree[pos]<<endl;

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
void make_treep(int low,int high,int pos)
{
    //cout<<low<<" "<<high<<endl;
    if(low==high)
    {
         seg_treep[pos]=arr[low];
        // cout<<seg_treep[pos]<<endl;

    }
    else
    {
    int mid=(low+high)/2;
    make_treep(low,mid,2*pos+1);
    make_treep(mid+1,high,2*pos+2);
    seg_treep[pos]=max(seg_treep[2*pos+1],seg_treep[2*pos+2]);
}
return ;
}
int range(int ql,int qh,int low,int high,int pos)
{
    if(qh<low||ql>high)//no overlap
        return 10000000;
    if(ql<=low&&qh>=high)//total overlap
        return seg_tree[pos];
   int mid=(low+high)/2;
    return min(range(ql,qh,low,mid,2*pos+1),range(ql,qh,mid+1,high,2*pos+2));


}
int rangep(int ql,int qh,int low,int high,int pos)
{
    if(qh<low||ql>high)//no overlap
        return 0;
    if(ql<=low&&qh>=high)//total overlap
        return seg_treep[pos];
   int mid=(low+high)/2;
    return max(rangep(ql,qh,low,mid,2*pos+1),rangep(ql,qh,mid+1,high,2*pos+2));


}
int main()
{

    long long int sum=0;
  long long   int n,i,j,m,x,y;
  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%I64d",&arr[i]) ;
    }
    if(n%2==0)
        m=2*n-1;
    else
    {
        m=(n/2+1)*n-1;
    }
    for(i=0;i<m;i++)
    {
        seg_treep[i]=0;
        seg_tree[i]=10000000;
    }
    make_tree(0,n-1,0);
    make_treep(0,n-1,0);

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
        x=range(i,j,0,n-1,0);
        y=rangep(i,j,0,n-1,0);
        sum+=(y-x);
        }

    }
   printf("%I64d\n",sum);
    return 0;
}

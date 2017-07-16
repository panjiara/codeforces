#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)

bool g[333][333];
int n,a[333];
char s[333];

int main()
{
    scanf("%d",&n);
    rep(i,n)
        scanf("%d",&a[i]);
    rep(i,n)
    {
        scanf("%s",s);
        rep(j,n) g[i][j] = (i==j || s[j]=='1');
    }
    rep(k,n)rep(i,n)rep(j,n) if(g[i][k]&&g[k][j])g[i][j]=1;
    rep(i,n) for(int j=i+1;j<n;j++) if(g[i][j] && a[i]>a[j])swap(a[i],a[j]);
    rep(i,n) printf("%d ",a[i]);

    return 0;
}

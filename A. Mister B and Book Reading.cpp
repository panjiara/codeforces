#include<bits/stdc++.h>
using namespace std ;
int n,j,k,l,d,c,a,v0,v1;
long long int m,i;
int main()
{
    cin>>c>>v0>>v1>>a>>l;
   while(1)
    {
        i++;
        if(v0+(i-1)*a>v1)
        {
           m+=v1;
        }
        else
       m+=(v0+(i-1)*a);
       if(m>=c)
        break;
         m-=l;

}

cout<<i<<endl;
    return 0;
}

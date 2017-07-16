#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.'&&s[i+1]=='.')
            ans++;

    }
    for(int i=0;i<m;i++)
    {
        int h;
        char c;
        cin>>h>>c;
        if(s[h-1]!='.' && c=='.' && s[h-2]=='.')
            ans++;
		if(s[h-1]!='.' && c=='.' && s[h]=='.')
		ans++;
		if(s[h-1]=='.' && c!='.' && s[h-2]=='.')
		ans--;
		if(s[h-1]=='.' && c!='.' && s[h]=='.')
		ans--;
		if(ans<0) ans=0;
		cout<<ans<<endl;
		s[h-1]=c;
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

vector <int> num;
int memo[1000005];

bool uno(int num){
	while(num){
		int aux=num%10;
		if(aux>1) return false;
		num/=10;
	}
	return true;
}

void genera(){
	for(int i=1;i<=1000000;i++)
		if(uno(i))
			num.push_back(i);
}

int n,minimo;

int DP(int sum){
	if(sum==n) return 0;
	if(memo[sum]!=-1) return memo[sum];
	int res=1<<28;
	for(int i=0;i<num.size();i++){
		if(sum+num[i]<=n)
			res=min(DP(sum+num[i])+1,res);
	}
	return memo[sum]=res;
}

int sum2;

void solve(int sum){
	if(sum==n) return;
	for(int i=0;i<num.size();i++)
        {
		if(sum+num[i]<=n)
		{
			if(memo[sum]==memo[sum+num[i]]+1)
			{
				printf("%d ",num[i]);
				sum2+=num[i];
				solve(sum+num[i]);
				return;
			}
		}
	}
}

int main(){
	genera();
	scanf("%d",&n);
	for(int j=0;j<=n;j++)
		memo[j]=-1;
	reverse(num.begin(),num.end());
	minimo=DP(0);
	printf("%d\n",minimo);
	solve(0);
	printf("%d\n",n-sum2);
	return 0;
}

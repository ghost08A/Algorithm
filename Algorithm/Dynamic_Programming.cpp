#include <iostream>
using namespace std;
int dp[100][100]; // memory table

int C(int n, int k)
{
if(k==0 || k==n) // base case

return 1;

if(dp[n][k] != -1) // existing compute

return dp[n][k];

dp[n][k]= C(n-1, k-1)+C(n-1, k);

return dp[n][k];
}

int memo[100][100];

f(int n,int k)
{ 
	if(k==0||n==k){
		return 1;
	}
	else if(memo[n][k] != 0)
	{
		//cout<<"n = "<<n<<" | k = "<<k<<endl;
		return memo[n][k];
	}
	else{
		//cout<<"n = "<<n<<" | k = "<<k<<endl;
		memo[n][k] = f(n-1,k-1)+f(n-1,k);
		return memo[n][k];
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<C(n,k)<<endl;
	cout<<f(n,k)<<endl;
	
	return 0;
}


#include <iostream>
using namespace std;


int memo[100] = {0};

f(int n, int memo[])
{ 
	if(n < 2)
		return n;
	else if(memo[n] != 0)
		return memo[n];
	else {
		memo[n]=f(n-1,memo)+f(n-2,memo);
		return memo[n];
	}
}

int main(){
	int n;
	cin>>n;
	cout<<f(n,memo)<<endl;
	int arr[n+1];
	for(int i = 1;i<=n;i++){
		if(i<=2){
			arr[i]=1;
		}
		else{
			arr[i]=arr[i-1]+arr[i-2];
		}
	}
	cout<<arr[n];
	return 0;
}


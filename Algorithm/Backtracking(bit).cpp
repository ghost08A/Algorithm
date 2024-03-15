#include <iostream>
using namespace std;

int count = 0;

void print_sol(int x[],int n,int k){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			count++;
		}
	}	
	if(count==k){
		for(int i=1;i<=n;i++){
			cout<<x[i];
		}
		cout<<endl;
	}
	count = 0;
}

void subset1(int x[],int l,int r,int k){
	if(l==r){
		print_sol(x,r,k);
	}else{
		x[l+1]=1;
		subset1(x,l+1,r,k);
		x[l+1]=0;
		subset1(x,l+1,r,k);
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	int x[n+1],arr[n];
	subset1(x,0,n,k);
	return 0;
}

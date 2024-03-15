#include <iostream>
using namespace std;

void print_sol(int x[],int n){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void subset2(int x[],int l,int r,int n){
	print_sol(x,l);
	int j = (l==0)? 1:x[l]+1;
	for(int i = j ;i<=n;i++){
		x[l+1]=i;
		subset2(x,l+1,r,n);
	}
}

int main(){
	int n = 4;
	int x[n+1];
	subset2(x,0,n,n);
	
	return 0;
}

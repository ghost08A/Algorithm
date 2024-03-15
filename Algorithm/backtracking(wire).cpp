#include <iostream>
using namespace std;

int wire=999999;
int count = 0;

void print_sol(int x[],int n,int arr[],int k){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			sum += arr[i-1];
			count++;
		}
	}	
	if(sum==k){
		if(count<wire){
			wire = count;
		}	
		/*for(int i=1;i<=n;i++){
			if(x[i]==1){
				cout<<arr[i-1]<<" ";
			}
		}
		cout<<endl;*/
	}
	count = 0;
}

void subset1(int x[],int l,int r,int arr[],int k){
	if(l==r){
		print_sol(x,r,arr,k);
	}else{
		x[l+1]=1;
		subset1(x,l+1,r,arr,k);
		x[l+1]=0;
		subset1(x,l+1,r,arr,k);
	}
}

int main(){
	int n,k;
	cin>>k>>n;
	int x[n+1],arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	subset1(x,0,n,arr,k);
	if(wire!=999999){
		cout<<wire;
	}else{
		cout<<-1;
	}
	
	return 0;
}

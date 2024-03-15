#include <iostream>

using namespace std;

int main(){
	int n,x,i,j,a1,a2,sum,check=-1;
	cin>>n;
	cin>>x;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(check!=-1){
			break;
		}
		for(j=i+1;j<n;j++){
			sum = 0;
			if(i!=j){
				sum = arr[i]+arr[j];
				if(sum==x){
					a1=i;
					a2=j;
					check=0;
					break;
				}
			}
			
		}
	}
	if(check==-1){
		cout<<check;
	}
	else{
		cout<<a1<<" "<<a2;
	}
	return 0;
}

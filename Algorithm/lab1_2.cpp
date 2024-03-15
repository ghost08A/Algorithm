#include <iostream>

using namespace std;

int main(){
	int n,i,j,k,max=-999999,sum=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum=0;
			for(k=i;k<n-j;k++){
				//cout<<arr[k]<<" ";
				sum += arr[k];
				if(max<sum){
					max=sum;
				}
			}
			//cout<<"sum = "<<sum<<endl;
		}
	}
	cout<<max;
	return 0;
}

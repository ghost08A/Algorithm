#include <iostream>

using namespace std;

void insertion_sort(int *A,int n){
	int i,j,v;
	for(i=1;i<n;i++){
		v = A[i];
		j= i-1;
		while(j>=0 && A[j]>v){
			A[j+1] = A[j];
			j -= 1;
		}
		A[j+1] = v;
	}
}

int main(){
	int n,i,j,count=1;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	insertion_sort(arr,n); //sort
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n-1;i++){
		if(arr[i+1]!=arr[i]+1){
				count++;
		}
	}
	cout<<count;
	return 0;
}

#include <iostream>

using namespace std;

int binary_search(int a[], int l, int r,int k){
	if(l<=r){
		int mid = l+(((k-a[l])*(r-l))/(a[r]-a[l]));
		if(a[mid]==k){
			return mid;
		}
		else if(a[mid]>k){
			cout<<mid<<" ";
			return binary_search(a,l,mid-1,k);
		}
		else{
			cout<<mid<<" ";
			return binary_search(a,mid+1,r,k);
		}
	}
	return -1;
	
}

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<binary_search(arr,0,n-1,k);
	return 0;
}

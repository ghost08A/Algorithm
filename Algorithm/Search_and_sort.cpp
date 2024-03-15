#include <iostream>

using namespace std;

int sequential_search(int A[],int k,int n){
	int i=0;
	cout<<"sequential_search ";
	while((A[i] != k)&&(i < n))
		i++;
	if(i < n){
		cout<< i<<endl;
	}
	else{
		cout<< -1<<endl;
	}
}

int binary_search(int a[],int l,int r, int k){//Must sort first
	if(l<=r){
		int mid = (l+r)/2;
		if(a[mid]==k){
			cout<<mid<<endl;
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
	cout<<-1<<endl;
	return -1;
}

int Interpolation_search(int a[],int l,int r, int k){//Must sort first
	if(l<=r){
		int mid = l+(((k-a[l])*(r-l))/(a[r]-a[l]));
		if(a[mid]==k){
			cout<<mid<<endl;
			return mid;
		}
		else if(a[mid]>k){
			cout<<mid<<" ";
			return Interpolation_search(a,l,mid-1,k);
		}
		else{
			cout<<mid<<" ";
			return Interpolation_search(a,mid+1,r,k);
		}
	}
	cout<<-1<<endl;
	return -1;
}



void bubble_sort(int *A,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(A[j]>A[i]){
				int t = A[j];
				A[j] = A[i];
				A[i] = A[j];
			}
		}
	}
}

int main(){ 
	int n,k,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[n];
	}
	/*sequential_search(a,k,n);
	cout<<"binary_search ";
	binary_search(b,0,n-1,k);//Must sort first
	cout<<"sequential_search ";
	Interpolation_search(b,0,n-1,k);//Must sort first*/
	bubble_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

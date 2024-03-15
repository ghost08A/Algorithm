#include <iostream>

using namespace std;
/*int findmax(int A[] ,int l, int r)
{
    if(l==r)
         return A[l];
    int m = (l + r) / 2;
    int m1 = findmax(A, l, m);
    int m2 = findmax(A, m+1, r);

    return (m1 > m2)? m1: m2;
}*/
int findmax(int *A,int l,int r){
	if(l==r){	
		return A[l];
	}
	int m = (l+r)/2;
	int m1 = findmax(A,l,m);
	int m2 = findmax(A,m+1,r);
	return (m1>m2)?m1:m2;
}
int main(){
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<findmax(arr,0,n-1);
	return 0;
}

#include <iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void permute(int x[],int start,int end){
	if(start == end){
		for(int i = 1;i<=end;i++){
			
			cout<<x[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i = start;i<=end;i++){
		swap(&x[start],&x[i]);
		permute(x,start+1,end);
		swap(&x[start],&x[i]);
	}
}

int main(){
	int n = 3;
	int x[] = {-1,1,2,3};
	permute(x,1,n);
	
	return 0;
}

#include <iostream>

using namespace std;

void insertion_sort(double *A,int n){
	int i,j;
	double v;
	for(i=1;i<n;i++){
		v = A[i];
		j= i-1;
		while(j>=0 && A[j]<v){
			A[j+1] = A[j];
			j -= 1;
		}
		A[j+1] = v;
	}
}
int main(){
	int n,w_max,i,j,max=0;
	cin>>n>>w_max;
	double w[n][4],arr[n],value=0,rest,w_rest,v_rest;
	for(i=0;i<n;i++){
		cin>>w[i][0];
		w[i][3] = 0;
	}
	for(i=0;i<n;i++){
		cin>>w[i][1];
		w[i][2]=w[i][1]/w[i][0];
		arr[i] = w[i][2];
	}
	insertion_sort(arr,n);
	/*for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}*/
	// 0 = W ,1 = v ,2 = v/w , 3 = check                                                  
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i]==w[j][2]&&w[j][3]==0){
				if(w_max >= w[j][0]+max){
					max += w[j][0];
					value += w[j][1];
					w[j][3] = 1;
					break;		
				}else{
					if(w_max>max){
						rest = w_max-max;
						w[j][3] = rest/w[j][0];
						max += w[j][3];
						value += w[j][1]*w[j][3];
						i = 9999;
						break;
					}
				}
			}	
		}
	}
	for(i=0;i<n;i++){
		cout<<w[i][3]<<" ";
	}
	cout<<endl<<value;
	return 0;
}

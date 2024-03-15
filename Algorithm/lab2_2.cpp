#include <iostream>

using namespace std;
int main(){
	int i,n,k,a,count=0,ch=-1;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>a;
		if(i==0){
			arr[count++]=a;
		}
		else{
			for(k=0;k<count;k++){
				if(arr[k]==a){
					ch=1;
				}
			}
			if(ch==-1){
				arr[count++]=a;
			}else{
				ch=-1;
			}
		}
	}
	cout<<count;
}

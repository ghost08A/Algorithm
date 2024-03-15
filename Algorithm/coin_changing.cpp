#include <iostream>

using namespace std;

int main(){
	int n,i,j,platform_max=0;
	cin>>n;
	
	double start[n],end[n],s=9999,e=-9999;
	for(i=0;i<n;i++){
		cin>>start[i]>>end[i];
	}
	for(i=0;i<n;i++){
		if(s<start[i]){
			s=start[i];
		}
		if(e<end[i]){
			e=end[i];
		}
	}
	return 0;
}



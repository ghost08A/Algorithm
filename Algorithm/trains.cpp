#include <iostream>

using namespace std;

int main(){
	int i,j,n,max=1,check=0;
	cin>>n;
	double trains[n][2],max_trains[n][2];
	for(i=0;i<n;i++){
		cin>>trains[i][0]>>trains[i][1];
	}
	max_trains[0][0]=trains[0][0];
	max_trains[0][1]=trains[0][1];
	for(i=1;i<n;i++){
		for(j=0;j<max;j++){
			if(max_trains[j][1]<=trains[i][0]){
    			max_trains[j][0]=trains[i][0];
    			max_trains[j][1]=trains[i][1];
    			check = 1;
    			break;
			}
		}
		if(check==0){	
			max_trains[max][0]=trains[i][0];
			max_trains[max][1]=trains[i][1];
			max++;
		}
		check=0;
	}
	cout<<max;
	return 0;
}


#include <iostream>
#include <math.h>
using namespace std;

void divideGifts(int n, int gifts[]) {
    for (int i=0;i<n-1;++i) {
        for (int j=0;j<n-i-1;++j) {
            if (gifts[j] < gifts[j+1]) {
                int temp = gifts[j];
                gifts[j] = gifts[j+1];
                gifts[j+1] = temp;
            }
        }
    }

    int P = 0;
    int nong = 0;
    for (int i=0;i<n;++i) {
        if (P<=nong) {
            P += gifts[i];
        } else {
            nong += gifts[i];
        }
    }
    int difference = abs(P-nong);
    cout<<difference;
}
int main() {
    int n;
    cin>>n;
	n =n*2;
    int gifts[n];
    
    for (int i=0;i<n;++i) {
        cin>>gifts[i];
        
    }
    divideGifts(n, gifts);

    return 0;
}

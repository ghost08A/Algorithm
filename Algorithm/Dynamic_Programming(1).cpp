#include <iostream>

using namespace std;

int main() {
  int W = 10; 
  int n = 4; 

  int wt[] = {5, 4, 6, 3}; 
  int val[] = {10, 40, 30, 50}; 

  int K[n + 1][W + 1];


  for (int i = 0; i <= n; i++) {
    for (int w = 0; w <= W; w++) {
      if (i == 0 || w == 0) {
        K[i][w] = 0;
      } else if (wt[i - 1] <= w) {
        K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
      } else {
        K[i][w] = K[i - 1][w];
      }
    }
  }

  cout << "Max : " << K[n][W] << endl;

 
  int w = W;
  for (int i = n; i >= 1; i--) {
    if (K[i][w] != K[i - 1][w]) {
      cout << "Choose " << i << endl;
      w -= wt[i - 1];
    }
  }

  return 0;
}

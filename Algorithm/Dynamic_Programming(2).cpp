#include <iostream>
#include <vector>

const int INF = 1e9;

int main() {
  
  int n = 5;

  
  vector<vector<int> > adj = {
    {0, INF, INF, INF, 10},
    {INF, 0, 4, 11, 2},
    {INF, INF, 0, 4, INF},
    {INF, INF, 2, 0, 7},
    {INF, INF, INF, INF, 0}
  };

  // ???????????
  vector<vector<int>> dist = adj;

  // ?????????? Floyd-Warshall
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  // ???????????
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (dist[i][j] == INF) {
        cout << "INF ";
      } else {
        cout << dist[i][j] << " ";
      }
    }
    cout << endl;
  }

  // ????????????????????????? A ?? E
  int start = 0; // A
  int end = 4; // E
  vector<int> path;

  int current = end;
  while (current != start) {
    for (int i = 0; i < n; i++) {
      if (dist[current][i] == dist[end][i]) {
        path.push_back(i);
        current = i;
        break;
      }
    }
  }

  path.push_back(start);
  reverse(path.begin(), path.end());

  for (int i = 0; i < path.size(); i++) {
    cout << path[i] << " ";
  }
  cout << endl;

  return 0;
}

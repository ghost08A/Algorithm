#include <iostream>
#include <vector>
using namespace std;

void print_graph(vector<pair<int,int> > adj[],int v){
	for(int i=1;i<=v;++i){
		cout<<i<<" :";
		for(int j=0;j<adj[i].size();++j){
			cout<<" ("<<adj[i][j].first<<","<<adj[i][j].second<<")";
		}
		cout<<endl;
	}
}

int main(){
	vector<pair<int,int> > adj[5];
	adj[1].push_back({2, 5});
	adj[2].push_back({3, 7});
	adj[2].push_back({4, 6});
	adj[3].push_back({4, 5});
	adj[4].push_back({1, 2});
	
	print_graph(adj,4);
	return 0;
}

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int c;
#define INF 50000

void Dijkstra(vector<pair<int,int> > adj[], int V, int src,int t)
{
	priority_queue< pair<int, int>, vector <pair<int, int> > , greater<pair<int, int> > > pq;
	vector<int> dist(V, INF);
	vector<int> parent(V, -1);
	vector<bool> intree(V, false);
	int min = 9999;
	pq.push( {0, src} ); // push start vertex src { dist, vertex}
	dist[src] = 0; // initial distance of src
	while (!pq.empty()){ 
		int u = pq.top().second; // get u from pq.
		intree[u] = true;
		pq.pop();	
		for (int j = 0; j < adj[u].size(); ++j) {
			int v = adj[u][j].first; // get v and weight from adj list.
			int weight = adj[u][j].second;
				if (intree[v] == false && dist[u] + weight < dist[v]) {
					dist[v] = dist[u] + weight; // Update weight of v
					pq.push({dist[v], v}); // push v into pq.
					parent[v] = u;
					if(v == t){
        				if(min>dist[v]){
        					min = dist[v];
        					c= min;
						}
					}
				}
		}
	}
}

void print_graph(vector<pair<int,int> > adj[],int v){
	for(int i=0;i<=v;++i){
		cout<<i<<" :";
		for(int j=0;j<adj[i].size();++j){
			cout<<" ("<<adj[i][j].first<<","<<adj[i][j].second<<")";
		}
		cout<<endl;
	}
}

int main()
{ 
	int net,n,m,s,t,i,j,a,b,w;
	int arr[net];
	cin>>net;
	for(i=0;i<net;i++){
		cin>>n>>m>>s>>t;
		vector<pair<int, int > > adj[n];
		for(j=0;j<m;j++){
			cin>>a>>b>>w;
			adj[a].push_back({b, w});
			adj[b].push_back({a, w});
		}
		
		if(s>t){
		Dijkstra(adj, n,t,s);
		arr[i]=c;
	}
	else{
		Dijkstra(adj,n,s,t);
		arr[i]=c;
	}
		//cout<<c<<endl;
		//print_graph(adj,n-1);
		
	}
for(i=0;i<net;i++){
	cout<<arr[i]<<endl;
}

}

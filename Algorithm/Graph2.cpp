#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void print_graph(vector<vector<int> >& graph,int s){

        for(int j=1;j<=graph[s].size();j++){
        	if(graph[s][j]==0){
        		cout<<j<<" ";
			}
        }
        cout<<endl;
}

void print_graph(vector<vector<int> >& graph){
	for(int i=1;i<graph.size();i++){
		cout<<i<<" : ";
		for(int j=1;j<=graph[i].size();j++){
			cout<<" "<<graph[i][j];
		}
		cout<<endl;
	}
}

void BFS(vector<vector<int> > graph,int startVertex,int e,vector<bool> visited){
	queue<int> queue;
	queue.push(startVertex);
	visited[startVertex]=true;
	int count = 0;
	int arr[graph.size()];
	for(int i=0;i<graph.size();i++){
		arr[i]=-1;
	}
	while (!queue.empty()){
		int currentVertex = queue.front();
		queue.pop();
		//count++;
		//cout<< currentVertex<<" ";
		if(currentVertex==e){
			break;
		}
		for(int i=0;i<graph.size();++i){
			if(graph[currentVertex][i]&&!visited[i]){
				queue.push(i);
				arr[i] = currentVertex;
				visited[i] = true;	
			}
			
		}
	}
	cout<<endl;
	/*for(int i=0;i<graph.size();i++){
		cout<<arr[i]<<" ";
	}*/
	int d=e;
	while(d!=startVertex){
		count++;
		d = arr[d];
	}
	cout<<endl<<count;
}

int main(){
	vector<vector<int> > graph;
	int n,i,j,get,s,e,index,k;
	cin>>n;
	for(i=0;i<=n;++i){
		graph.push_back(vector<int>(n,0));
	}
	
	for(i=1;i<=n;++i){
		cin>>index;
		while(true){
			cin>>get;
			if(get!=i){
				if(get!= 0){
					graph[index][get]= get;
				}
				else{
					break;
				}
			}
			else{
				graph[index][get] = get;
			}
		}
	}
	
	cin>>k;
	for(i=0;i<k;i++){
        cin>>get;
        print_graph(graph,get);
    }
    //print_graph(graph);
	int numVertices = graph.size();
	vector<bool> visited(numVertices,false);
	//print_graph(graph);
//	cout<<"BFS :";
	//BFS(graph,s,e,visited);
	
	return 0;
}


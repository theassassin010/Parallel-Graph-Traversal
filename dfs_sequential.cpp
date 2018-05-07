#include <iostream>
#include <stack>
#include <vector> 

using namespace std;
		
void DFS(vector<vector<int> > edge, int start, int v){
	stack<int> st;
	vector<bool> visited(v, false);

	st.push(start);
	visited[start] = true;
	
	while(!st.empty()){
		int first = st.top();
		st.pop();
		cout << " " << first;
		
		vector<int>::iterator it = edge[first].begin();
		
		while(it != edge[first].end()){
			if(visited[*it] == false){
				st.push(*it);
				visited[*it] = true;
			}
			it++;
		}
	}			
}

int main(){
	int numNodes, tmp; 
	cin >> numNodes;
	vector<vector<int> > edge;
	for(int i=0; i<numNodes; i++){
		int numNbrs;
		cin >> numNbrs;
		vector<int> tmp;
		int nbr;
		for(int j=0; j<numNbrs; j++){
			cin >> nbr;
			tmp.push_back(nbr);
		}
		edge.push_back(tmp);
	}
	DFS(edge, 0, numNodes);
	cout << endl; 
}

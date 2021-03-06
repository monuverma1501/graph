#include<bits/stdc++.h>
using namespace std;
#define local 
#define ll long int

void adjlist(){
	int n,m;//n number of nodes and m number of edges
	//0 based means graph node numbering starts from 0 to n-1, so you need at max an adjacency index of n-1, thereby adj[n] will suffice
    //1 based means graph node numbering starts from 1 to n, so you need at max an adjacency index of n, thereby adj[n+1] will suffice
	cin>>n>>m;
	vector<int> adj[n+1]; // adj list
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	// view of adj list
	for(int i=1;i<=m;i++){
        cout<<i<<"->";
        for (auto x:adj[i])
            cout<<x<<" ";
        cout<<endl;
   }
}

int main(){
	adjlist();
	return 0;
}
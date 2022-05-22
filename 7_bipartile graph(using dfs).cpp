// a graph that can be coloured using 2 color such that no two adjacent nodes have same color called bipartile graph


example 
//input 
6 
6
1 2
2 3
3 4
4 6
6 2
4 5

//output
Bipartile graph



//code


#include<bits/stdc++.h>
using namespace std;

int color[100];

bool dfs(int node,vector<int> adj[],vector<int> &vis,int col){
     vis[node]=1;
     color[node]=col;
     for(auto it:adj[node]){
         if(!vis[it])
         {
             if(dfs(it,adj,vis,col^1)==false)
                return false;
         }
         else
         {
             if(color[node]==color[it])
                return false;
         }
     }
     return true;
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> adj[n+1];
	vector<int> vis(n+1,0);
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
    	adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool flag=true;
	for(int i=1;i<=n;i++)
	{
	    if(!vis[i])
	    {
    	    if(dfs(i,adj,vis,0)==false)
    	        flag=false;
	    }
	}
	if(flag)
	    cout<<"Bipartile graph";
	else
	    cout<<"Not bipartile graph";
}

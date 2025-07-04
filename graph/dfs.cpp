#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &adj,int src , vector<int> &ans,vector<bool> &visited){
   ans.push_back(src);
   visited[src]=true;
   for(auto it:adj[src] ){
     if(!visited[it]){
      dfs(adj,it,ans,visited);
     }
   }
}
void addEdge(vector<vector<int>> &adj, int e1,int e2){
  adj[e1].push_back(e2);
  adj[e2].push_back(e1);
}
int main(){
  int V, E;
  cout << "Enter no of vertices";
  cout << "Enter no of edges";
  cin >> V >> E;
  vector<vector<int>> adj(V);
  for(int i=0;i<E;i++){
    int e1,e2;
    cin >> e1 >> e2;
    addEdge(adj,e1,e2);
  }
  int src = 0;
  vector<bool> visited(V,false);
  vector<int> ans;
  dfs(adj,src,ans,visited);
  for(int it:ans){
    cout << it << " ";
  }

}
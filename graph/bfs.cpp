#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>> &adj,int e1,int e2){
      adj[e1].push_back(e2);
      adj[e2].push_back(e1);
}
void printAdj(vector<vector<int>> &adj){
  for(int i=0;i<adj.size() ; i++){
    cout << i << " : ";
    for(int j : adj[i]){
       cout << j << " ";
    }
    cout << " \n";
  }
}
vector<int> bfsDisconnected(vector<vector<int>> adj,int s){
 int V = adj.size();
 queue<int> q;
 vector<bool> visited(V,false);
 vector<int> ans;
 q.push(s);
 visited[s] = true;
 while(!q.empty()){
  int node = q.front();
  ans.push_back(node);
  q.pop();
  for(auto it : adj[node]){
     if(!visited[it]){
      visited[it]=true;
      q.push(it);

     }
  }
 }
 return ans;
}
int main(){
  int V, E;
  cout << "Enter no of vertices";
  cin >> V;
  cout << "Enter no of edges";
  cin >> E;
  vector<vector<int>> adj(V);
  for(int i=0;i< E;i++){
    int e1,e2;
    cin >> e1 >> e2;
    addEdge(adj,e1,e2);
  }
  printAdj(adj);
  int src = 0;
  vector<int> ans = bfsDisconnected(adj,src);
  for(auto it:ans){
    cout << it << " ";
  }
  return 0;

}

// Enter no of vertices5
// Enter no of edges4
// 0 1
// 0 2
// 0 3
// 2 4
// 0 : 1 2 3  
// 1 : 0  
// 2 : 0 4  
// 3 : 0  
// 4 : 2  
// 0 1 2 3 4 
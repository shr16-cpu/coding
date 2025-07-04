#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void prepareAdj(vector<vector<int>> &adj,int e1,int e2){
  adj[e1].push_back(e2);
  adj[e2].push_back(e1);
}
void printAdj(vector<vector<int>> &adj){
  for(int i=0;i<adj.size();i++){
    cout << i << " : ";
    for(int j : adj[i]){
      cout << j << " ";
    }
    cout << "\n";
  }
}
int main(){
  int V;
  int E;
  cout << "Enter no of vertices";
  cin >> V;
  vector<vector<int>> adj(V);
  cout << "Enter no of Edges";
  cin >> E;
  for(int i=0;i<E;i++){
    int e1,e2;
    cin >> e1 >> e2;
    prepareAdj(adj,e1,e2);
  }
  printAdj(adj);
  return 0;
}


//Enter no of vertices4
// Enter no of Edges4
// 0 1
// 0 2
// 1 2
// 3
// 1
// 0 : 1 2 
// 1 : 0 2 3 
// 2 : 0 1 
// 3 : 1 

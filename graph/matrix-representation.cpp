#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>> &mat , int e1,int e2){
    mat[e1][e2] = 1;
    mat[e2][e1] = 1;
}
void printMat(vector<vector<int>> &mat, int V){
  for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
      cout << mat[i][j] << " ";
    }
    cout << "\n";
  }
}
int main(){
  int V, E;
   cout << "Enter no of vertices";
  cin>> V;
 
 
  cout <<"Enter no of edges";
  cin >> E;
  vector<vector<int>> mat(V,vector<int>(V,0));
  for(int i=0;i<E;i++){
    int edg1;
    int edg2;
    cin >> edg1;
    cin>> edg2;
    addEdge(mat,edg1,edg2);
   
  }
   printMat(mat,V);
   return 0;
}
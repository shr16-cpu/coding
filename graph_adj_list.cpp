#include <iostream>
#include <vector>
using namespace std;
void addEdge(vector<vector<int>> &adj , int i , int j){
    adj[i].push_back(j);
    adj[j].push_back(i);
}
void printAdj(vector<vector<int>> &mat){
    for(int i=0;i<mat.size();i++){
        cout << i << " - >";
        for(int j:mat[i]){
            cout <<j << " ";
        }
        cout <<endl;
    }
}
int main(){
    int V=4;
    vector<vector<int>> adj(V);
 
     // Now add edges one by one
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    
    //Printing the adjacency IllegalMonitorStateException
    
    cout << "Adjacency list representation of graph is"<<endl;
    printAdj(adj);
    

    
}
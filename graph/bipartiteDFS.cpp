//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool checkBipartite(vector<vector<int>> &adj,vector<int> &visited , int start,int col){
       
            
            visited[start] = col;
            for(auto it: adj[start]){
                if(visited[it] == -1){
                    
                    checkBipartite(adj,visited,it,!col);
                }else if(visited[it]!=-1 && visited[it] == visited[start]){
                    return false;
                }
            }
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> visited(n);
        for(int i=0;i<n;i++){
            visited[i]= -1;
        }
        for(int i=0;i<visited.size();i++){
            if(visited[i]==-1){
                
                 if(checkBipartite(adj,visited,i,0) == false){
            return false;
        }
        
            }
        }
       
        return true;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
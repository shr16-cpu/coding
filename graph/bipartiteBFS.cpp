class Solution {
  public:
      bool checkBipartite(vector<vector<int>>& graph,int start, vector<int> &visited,int V){
          queue<int> q;
          q.push(start);
          visited[start] = 0;
          while(!q.empty()){
              int node = q.front();
              q.pop();
              for(auto it: graph[node]){
                  if(visited[it]==-1){
                     q.push(it);
                     if(visited[node]==0){
                      visited[it]=1;
                     }else{
                      visited[it] = 0;
                     }
                  }else if(visited[it]!=-1){
                      if(visited[node] == visited[it]){
                          return false;
                      }
                  }
              }
          }
         return true;
  
      }
      bool isBipartite(vector<vector<int>>& graph) {
          int V  = graph.size();
          vector<int> visited(V);
          for(int i=0;i<V;i++){
              visited[i]=-1;
          }
          int start = 0;
          for(int i=0;i<visited.size();i++){
              if(visited[i]==-1){
                    if(checkBipartite(graph,i,visited,V) == false){
                          return false;
                  }
              }
          }
         
          
          return true;
      }
  };
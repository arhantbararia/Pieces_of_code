 void dfs(int node, vector<bool>& visited , vector<int> adj[] , vector<int>& storedfs){
      storedfs.push_back(node);
      visited[node] = 1;
      for(auto it: adj[node]){
          if(!visited[it]){
              dfs(it , visited , adj , storedfs);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> storedfs;
        vector<int> visited(V+1 , 0);
        
        for(int i = 0 ; i < V ; i++){
            if(!visited[i]){
                dfs(i , visited , adj , storedfs);
            }
        }
    
        return storedfs;
    }
    
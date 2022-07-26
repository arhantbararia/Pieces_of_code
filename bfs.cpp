	
	//first make adjency list
	
	
	vector<int> bfs;
        vector<bool> visited(V , false);
        
        for(int i = 0 ; i < V ; i++){
            if(!visited[i]){
                queue<int> q;
                q.push(i);
                visited[i] = true ;
                while(!q.empty()){
                    int n = q.front();
                    q.pop();
                    bfs.push_back(n);
                    for(auto it : adj[n]){
                        if(!visited[it]){
                            q.push(it);
                            visited[i] = true;
                        }
                    }
                }
            }
        }
        
        return bfs;
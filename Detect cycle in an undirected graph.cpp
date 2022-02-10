//Problem Link:- https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1/
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool checkforcycle(int s,vector<int> adj[],vector<int> &vis){
        queue<pair<int,int>> q;
        q.push({s,-1});
        vis[s]=1;
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(it!=parent){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(!checkforcycle(i,adj,vis)){
                    return false;
                    
                }
            }
        }
        return true;
    }
};

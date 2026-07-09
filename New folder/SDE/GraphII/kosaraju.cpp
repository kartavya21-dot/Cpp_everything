#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
    void fn(stack<int>& order, vector<bool>& visited, int V, vector<vector<int>>& adj) {
        
        visited[V] = true;
        
        for(auto i : adj[V]) {
            if(!visited[i]) 
                fn(order, visited, i, adj);
        }
        
        order.push(V);
    }
    void check(vector<vector<int>>& adj, vector<bool>& vis, int v) {
        vis[v] = true;
        
        for(auto i : adj[v]) {
            if(!vis[i]) 
                check(adj, vis, i);
        }
        
    }
  public:
    int kosaraju(int V, vector<vector<int>> &edges) {
        // code here
        stack<int> order;
        vector<bool> visited(V, false);
        vector<vector<int>> adj(V);
        
        for(auto e : edges) adj[e[0]].push_back(e[1]);
        
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                fn(order, visited, i, adj);
            }
        }
        adj.clear();
        adj.assign(V, {});
        fill(visited.begin(), visited.end(), false);
        int ans = 0;
        
        for(auto e : edges) adj[e[1]].push_back(e[0]);
        cout << "F  ine";
        
        while(!order.empty()) {
            if(!visited[order.top()]) {
                check(adj, visited, order.top());
                ans++;
            } else {
                visited[order.top()] = false;
            }
            order.pop();
        }
        return ans;
    }
};

int main() {
    Solution obj;
    // [[0, 2], [0, 3], [1, 0], [2, 1], [3, 4]] 
    vector<vector<int>> edges = {{0, 2}, {0, 3}, {1, 0}, {2, 1}, {3, 4}};
    int V = 5;
    cout << obj.kosaraju(V, edges);
    
    return 0;
}
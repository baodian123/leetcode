class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        for (int i=0; i<connections.size(); ++i) {
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        
        vector<int> disc(n, -1), low(n, -1), parent(n, -1);
        vector<vector<int>> bridge;
        for (int i=0; i<n; ++i)
            if (disc[i] == -1) DFS(i, disc, low, parent, graph, bridge);
        
        return bridge;
    }
    
    void DFS(int cur, vector<int>& disc, vector<int>& low, vector<int>& parent, vector<vector<int>>& graph, vector<vector<int>>& bridge) {
        static int time = 0;
        disc[cur] = time;
        low[cur] = time;
        time += 1;
        
        for (int neighbor : graph[cur]) {
            if (disc[neighbor] == -1) {
                parent[neighbor] = cur;
                DFS(neighbor, disc, low, parent, graph, bridge);
                low[cur] = min(low[cur], low[neighbor]);
                
                if (low[neighbor] > disc[cur])
                    bridge.push_back({cur, neighbor});
            } else {
                if (neighbor != parent[cur])
                    low[cur] = min(low[cur], disc[neighbor]);
            }
        }
    }
};
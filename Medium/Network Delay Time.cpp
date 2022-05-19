class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> g(n+1);
        vector<int> d(n+1, 1e9);
        vector<bool> vi(n+1, false);
        
        for (vector<int> i : times)
            g[i[0]].emplace_back(i[1], i[2]);
        d[k] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.emplace(0, k);
        
        int u, v, w;
        while (!pq.empty()) {
            u = pq.top().second;
            pq.pop();
            if (vi[u]) continue;
            vi[u] = true;
            
            for (pair<int, int> p : g[u]) {
                v = p.first;
                w = p.second;
                if (d[v] > d[u] + w) {
                    d[v] = d[u] + w;
                    pq.emplace(d[v], v);
                }
            }
        }
        
        int rs = *max_element(d.begin()+1, d.end());
        return rs == 1e9 ? -1 : rs;
    }
};
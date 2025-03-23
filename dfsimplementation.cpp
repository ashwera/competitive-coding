class Solution {
    public:
        void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited)
        {
            //track whatever is visited so u dont visit it twice
            //track using adjacency list
            visited[node] = true; 
            for(int neighbour : adj[node])
            {
                if(!visited[neighbour])
                {
                    dfs(neighbour, adj, visited);
                }
            }
        }
        int intersect(vector<int>& a, vector<int>& b)
        {
            unordered_set<int> SetofA(a.begin(), a.end());
            unordered_set<int> SetofB(b.begin(), b.end());
            int count=0;
            for(int num:SetofB)
            {
                if(SetofA.count(num)!=0) count++;
                // cout << "for " << num << "count is " << count;
            }
            return count;
        }
    
        int numberOfComponents(vector<vector<int>>& properties, int k) {
            int n = properties.size();
    
            vector<vector<int>> adj(n);
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (intersect(properties[i], properties[j]) >= k) {
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }
            }
    
            vector<bool> visited(n, false);
            // cout << "Adjacency List:\n";
            // for (int i = 0; i < n; i++) {
            //     cout << i << " -> ";
            //     for (int val : adj[i]) {
            //         cout << val << " ";
            //     }
            //     cout << endl;
            // }
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(!visited[i]) //this node is unvisited
                {
                    //visit it
                    dfs(i, adj, visited);
                    count++;
                }
            }
            return count;
        }
    };
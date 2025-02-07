class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> mp, freq;
        int n = queries.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            int x = queries[i][0], y = queries[i][1];
            if(mp.find(x) != mp.end()){
                freq[mp[x]]--;
                if(freq[mp[x]] == 0) freq.erase(mp[x]);
            }
            mp[x] = y;
            freq[y]++;
            ans[i] = freq.size();
        }
        return ans;
    }
};

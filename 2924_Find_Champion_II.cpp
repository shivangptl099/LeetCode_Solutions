class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> freq(n, 0);
        for(int i = 0; i < edges.size(); i++){
            freq[edges[i][1]]++;
        }
        int zeroCount = 0, ans = -1;
        for(int i = 0; i < n; i++){
            if(freq[i] == 0){
                ans = i;
                zeroCount++;
                if(zeroCount > 1) return -1;
            }
        }
        return ans;
    }
};

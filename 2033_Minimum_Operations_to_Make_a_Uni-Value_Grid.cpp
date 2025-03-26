class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;
        int mod = grid[0][0] % x;
        for(auto r : grid){
            for(auto c : r){
                if(mod != c % x) return -1;
                arr.push_back(c);
            }
        }
        sort(arr.begin(), arr.end());
        int median = arr.size() / 2;
        int ans = 0;
        for(auto el : arr){
            ans += abs(el - arr[median]) /x;
        }
        return ans;
    }
};

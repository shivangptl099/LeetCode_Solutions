class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            arr[i] = heights[i];
        int ans = 0;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++)
            if(arr[i] != heights[i]) ans++;
        return ans;
    }
};

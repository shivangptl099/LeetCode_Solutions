class Solution {
public:
    int binarySearch(vector<vector<int>>& items, int target){
        int maxBeauty = 0;
        int l = 0, h = items.size() - 1, mid;
        while(l <= h){
            mid = l + ((h - l) / 2);
            if(items[mid][0] <= target){
                maxBeauty = max(maxBeauty, items[mid][1]);
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return maxBeauty;
    }

    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());
        for(int i = 1; i < items.size(); i++){
            items[i][1] = max(items[i - 1][1], items[i][1]);
        }
        vector<int> ans;
        for(int q : queries){
            int maxBeauty = binarySearch(items, q);
            ans.push_back(maxBeauty);
        }
        return ans;
    }
};

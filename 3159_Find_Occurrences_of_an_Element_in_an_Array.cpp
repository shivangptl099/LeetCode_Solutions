class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> indexes;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            if(nums[i] == x) indexes.push_back(i);
        
        vector<int> ans(queries.size(), -1);
        n = indexes.size();
        for(int i = 0; i < queries.size(); i++)
            if(queries[i] <= n)
                ans[i] = indexes[queries[i] - 1];
        return ans;
    }
};

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans, right;
        int sameCount = 0;
        for(int x : nums){
            if(x == pivot) sameCount++;
            else if(x < pivot) ans.push_back(x);
            else right.push_back(x);
        }
        while(sameCount--) ans.push_back(pivot);
        for(int x : right) ans.push_back(x);
        return ans;
    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int x: nums1){
            mp1[x]++;
        }
        vector<int> ans;
        for(int x : nums2){
            if(mp1.find(x) != mp1.end() && mp2.find(x) == mp2.end()){
                ans.push_back(x);
                mp2[x]++;
            }
        }
        return ans;
    }
};

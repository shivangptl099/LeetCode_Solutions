class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        for(int x : nums1){
            mp1[x]++;   
        }
        unordered_map<int, int> mp2;
        for(int x : nums2){
            if(mp1.find(x) != mp1.end()){
                mp2[x]++;
            }
        }
        vector<int> ans;
        for(auto it : mp2){
            int x = min(it.second, mp1[it.first]);
            for(int i = 0; i < x; i++){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

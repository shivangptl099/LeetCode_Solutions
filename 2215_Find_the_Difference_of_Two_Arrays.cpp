class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num1;
        vector<int> num2;
        unordered_map<int,int> mp;
        int flag = 0;
        for(int i : nums1){
            for(int j : nums2){
                if(j == i){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                if(mp.find(i) == mp.end()){
                num1.push_back(i);
                }
                mp[i] = 1;
            }
            else{
                flag = 0;
            }
        }
        mp.clear();
        flag = 0;
        for(int i : nums2){
            for(int j : nums1){
                if(j == i){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                if(mp.find(i) == mp.end()){
                num2.push_back(i);
                }
                mp[i] = 1;
            }
            else{
                flag = 0;
            }
        }
        vector<vector<int>> ans;
        ans.push_back(num1);
        ans.push_back(num2);
        return ans;
    }
};

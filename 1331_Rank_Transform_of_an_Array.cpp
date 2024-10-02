class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans = arr;
        sort(ans.begin(), ans.end());
        unordered_map<int, int> mp;
        int ct = 1;
        for(int x : ans){
            if(mp.find(x) == mp.end()){
                mp[x] = ct++;
            }
        }
        ans = arr;
        for(int i = 0; i < ans.size(); i++){
            ans[i] = mp[ans[i]];
        }
        return ans;
    }
};

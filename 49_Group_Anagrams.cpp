class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            if(mp.find(s) != mp.end()){
                vector<string> temp2(mp[s].begin(),mp[s].end());
                temp2.push_back(strs[i]);
                mp[s] = temp2;
            }
            else{
                mp[s] = {strs[i]};
            }
        }
        vector<vector<string>> result;
        for(auto pair : mp){
            result.push_back(pair.second);
        }
        return result;
    }
};

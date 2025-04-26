class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> freq_map;
        int max_freq = 0;
        for(int i = 0; i < responses.size(); i++){
            set<string> mySet;
            for(int j = 0; j < responses[i].size(); j++){
                mySet.insert(responses[i][j]);
            }
            for(string s : mySet){
                freq_map[s]++;
                max_freq = max(max_freq, freq_map[s]);
            }
        }
        vector<string> possible_ans;
        for(auto it : freq_map){
            if(it.second == max_freq) possible_ans.push_back(it.first);
        }
        sort(possible_ans.begin(), possible_ans.end());
        return possible_ans[0];
    }
};©leetcode

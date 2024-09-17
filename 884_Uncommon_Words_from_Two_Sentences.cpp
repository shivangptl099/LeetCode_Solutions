class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int i = 0;
        unordered_map<string, int> mp;
        string temp;
        while(i < s1.length()){
            if(s1[i] == ' '){
                mp[temp]++;
                temp = "";
            } else {
                temp += s1[i];
            }
            i++;
        }
        mp[temp]++;
        temp = "";
        i = 0;
        while(i < s2.length()){
            if(s2[i] == ' '){
                mp[temp]++;
                temp = "";
            } else {
                temp += s2[i];
            }
            i++;
        }
        mp[temp]++;
        vector<string> ans;
        for(auto it : mp){
            if(it.second == 1) ans.push_back(it.first);
        }
        return ans;
    }
};

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
        for(char c : allowed){
            mp[c]++;
        }
        int count = 0;
        for(string s: words){
            int i = 0;
            while(i < s.length()){
                if(mp.find(s[i]) == mp.end()){
                    break;
                }
                i++;
            }
            if(i == s.length()){
                count++;
            }
        }
        return count;
    }
};

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp1,mp2;
        int ans = 0;
        for(char c: chars)
            if(mp1.find(c) != mp1.end()) mp1[c]++;
            else mp1[c] = 1;

        for(string s: words){
            string word = s;
            for(char c: word)
                if(mp2.find(c) != mp2.end()) mp2[c]++;
                else mp2[c] = 1;
            int flag = 1;
            for(auto it: mp2){
                if(mp1[it.first] < it.second){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) ans += s.length();
            mp2.clear();
        }
        return ans;
    }
};

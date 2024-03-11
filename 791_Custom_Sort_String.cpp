class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(char c : order){
            mp[c] = 0;
        }
        vector<char> remaining;
        for(char c : s){
            if(mp.find(c) == mp.end()){
                remaining.push_back(c);
            } else {
                mp[c]++;
            }
        }
        string ans;
        for(char c : order){
            int count = mp[c];
            if(count == 0) continue;
            else {
                while(count > 0){
                    ans += c;
                    count--;
                }
            }
        }
        for(char c : remaining){
            ans += c;
        }
        return ans;
    }
};

class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mp;
        for(auto it : word){
            mp[it]++;
        }
        vector<int> freq;
        for(auto it : mp){
            freq.push_back(it.second);
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int ans = 0;
        int ct = 0;
        for(auto it : freq){
            ct++;
            if(ct <= 8){
                ans += it;
            }
            else if(ct <= 16){
                ans += 2 * it;
            }
            else if(ct <= 24){
                ans += 3 * it;
            } else {
                ans += 4 * it;
            }
        }
        return ans;
    }
};

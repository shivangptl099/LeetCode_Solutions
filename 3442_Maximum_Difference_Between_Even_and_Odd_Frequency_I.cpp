class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        int odd = -1, even = 101;
        for(auto it : freq){
            int f = it.second;
            if(f % 2 == 0) even = min(even, f);
            else odd = max(odd, f);
        }
        return odd - even;
    }
};

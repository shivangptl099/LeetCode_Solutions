class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26);
        int i = 0, ans = 0;
        while(i < s.length()){
            freq[s[i++] - 'a']++;
        }
        i = 0;
        while(i < 26){
            if(freq[i]){
                ans += (freq[i] % 2 == 0) ? 2 : 1;
            }
            i++;
        }
        return ans;
    }
};

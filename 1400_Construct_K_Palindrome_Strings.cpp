class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k > s.length()) return false;
        vector<int> freq(26);
        int i = 0;
        while(i < s.length()){
            freq[s[i] - 'a']++;
            i++;
        }
        int odd_count = 0;
        i = 0;
        while(i < 26){
            if(freq[i++] % 2 != 0) odd_count++;
        }
        return (odd_count <= k) ? true : false;
    }
};

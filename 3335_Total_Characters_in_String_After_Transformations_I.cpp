class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int MOD = 1e9 + 7;
        vector<long long> mp(26, 0);
        for(char c : s) mp[c - 'a']++;
        while(t--){
            vector<long long> freq(26, 0);
            for(int i = 0; i < 25; i++){
                freq[i + 1] = mp[i] % MOD;
            }
            freq[0] = (freq[0] + mp[25]) % MOD;
            freq[1] = (freq[1] + mp[25]) % MOD;
            mp = move(freq);
        }
        long long ans = 0;
        for(int i = 0; i < 26; i++) ans = (ans + mp[i]) % MOD;
        return (int)ans;
    }
};

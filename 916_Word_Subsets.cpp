class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> max_freq(26);
        for(string s : words2){
            vector<int> freq(26);
            for(char c : s){
                int x = c - 'a';
                freq[x]++;
                max_freq[x] = max(max_freq[x], freq[x]);
            }
        }
        vector<string> ans;
        for(string s : words1){
            vector<int> freq(26);
            for(char c : s){
                freq[c - 'a']++;
            }
            bool correct = true;
            for(int i = 0; i < 26; i++){
                if(freq[i] < max_freq[i]){
                    correct = false;
                    break;
                }
            }
            if(correct) ans.push_back(s);
        }
        return ans;
    }
};

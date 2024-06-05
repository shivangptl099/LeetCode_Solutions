class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, 0);
        string s = words[0];
        for(char c : s){
            freq[c - 'a']++;
        }
        for(int i = 1; i < words.size(); i++){
            string s1 = words[i];
            vector<int> freq1(26, 0);
            for(char c : s1){
                freq1[c - 'a']++;
            }
            for(int i = 0; i < 26; i++){
                freq[i] = min(freq[i], freq1[i]);
            }
        }
        vector<string> ans;
        for(int i = 0; i < 26; i++){
            if(freq[i] != 0){
                for(int j = 0; j < freq[i]; j++){
                    ans.push_back(string(1, 'a' + i));
                }
            }
        }
        return ans;
    }
};

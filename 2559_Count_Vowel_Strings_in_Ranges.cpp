class Solution {
public:
    bool isVowelString(string curr){
        char s = curr[0], e = curr[curr.length() - 1];
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
            if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u'){
                return true;
            }
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> count(n);
        count[0] = (isVowelString(words[0]) ? 1 : 0);
        for(int i = 1; i < n; i++){
            count[i] = (isVowelString(words[i]) ? count[i - 1] + 1 : count[i - 1]);
        }
        int q = queries.size();
        vector<int> ans(q);
        for(int i = 0; i < q; i++){
            int s = queries[i][0], e = queries[i][1];
            if(s == e){
                ans[i] = (isVowelString(words[s])) ? 1 : 0;
            } else {
                ans[i] = count[e] - ((s == 0) ? 0 : count[s - 1]);
            }
        }
        return ans;
    }
};

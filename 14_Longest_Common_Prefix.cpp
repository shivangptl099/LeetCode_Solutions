class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i,j;
        char c;
        for(i = 0; i < strs[0].length(); i++){
            c = strs[0][i];
            for(j = 0; j < strs.size(); j++){
                if(strs[j][i] != c){
                    return ans;
                }
            }
            ans += c;
        }
        return ans;
    }
};

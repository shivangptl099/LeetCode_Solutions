class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(string s : words){
            for(string y : words){
                if(s == y) continue;
                if(y.find(s) != string::npos){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        string s1 = "";
        int max_len = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                int x = s1.length();
                max_len = max(max_len, x);
                words.push_back(s1);
                s1 = "";
            } else s1 += s[i];
        }
        if(s1 != "") words.push_back(s1);
        int x = s1.length();
        max_len = max(max_len, x);
        int i = 0;
        vector<string> ans;
        while(i < max_len){
            s1 = "";
            for(int j = 0; j < words.size(); j++){
                if(i >= words[j].length()) s1 += " ";
                else s1 += words[j][i];
            }
            int j = s1.length() - 1;
            while(j >= 0 && s1[j] == ' ') j--;
            s1 = s1.substr(0, j + 1);
            ans.push_back(s1);
            i++;
        }
        return ans;
    }
};

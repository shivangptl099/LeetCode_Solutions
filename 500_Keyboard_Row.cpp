class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string l1 = "qwertyuiop";
        string l2 = "asdfghjkl";
        string l3 = "zxcvbnm";
        vector<string> ans;
        for(string s : words){
            if(l1.find(tolower(s[0])) != string::npos){
                int j = 1;
                while(j < s.length()){
                    if(l1.find(tolower(s[j])) == string::npos){
                        break;
                    }
                    j++;
                }
                if(j == s.length()) ans.push_back(s);
            }
            else if(l2.find(tolower(s[0])) != string::npos){
                int j = 1;
                while(j < s.length()){
                    if(l2.find(tolower(s[j])) == string::npos){
                        break;
                    }
                    j++;
                }
                if(j == s.length()) ans.push_back(s);
            }
            else{
                int j = 1;
                while(j < s.length()){
                    if(l3.find(tolower(s[j])) == string::npos){
                        break;
                    }
                    j++;
                }
                if(j == s.length()) ans.push_back(s);
            }
        }
        return ans;
    }
};

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> mySet;
        for(string s : dictionary){
            mySet.insert(s);
        }
        sentence.push_back(' ');
        string ans = "";
        string temp = "";
        for(int i = 0; i < sentence.length(); i++){
            if(sentence[i] == ' '){
                ans += temp + char(' ');
                temp = "";
            } else {
                temp += sentence[i];
                if(mySet.count(temp) != 0){
                    ans += temp + char(' ');
                    temp = "";
                    while(sentence[i] != ' '){
                        i++;
                    }
                }
            }
        }
        ans.pop_back();
        return ans;
    }
};

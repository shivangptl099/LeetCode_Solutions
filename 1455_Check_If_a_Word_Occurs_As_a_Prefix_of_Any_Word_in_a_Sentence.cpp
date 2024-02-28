class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        int i = 0;
        string s;
        while(i < sentence.length()){
            if(sentence[i] == ' '){
                words.push_back(s);
                s = "";
            } else {
                s += sentence[i];
            }
            i++;
        }
        words.push_back(s);
        int n = searchWord.length();
        for(int i = 0; i < words.size(); i++){
            if(words[i][0] == searchWord[0] && words[i].substr(0,n) == searchWord){
                return i + 1;
            }
        }
        return -1;
    }
};

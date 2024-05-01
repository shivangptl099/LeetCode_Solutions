class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1;
        for(int i = 0; i < word.length(); i++)
            if(word[i] == ch) {
                index = i;
                break;
            }
        if(index == -1) return word;
        string s1 = word.substr(0, index + 1);
        reverse(s1.begin(), s1.end());
        string s2 = word.substr(index + 1);
        return s1 + s2;
    }
};

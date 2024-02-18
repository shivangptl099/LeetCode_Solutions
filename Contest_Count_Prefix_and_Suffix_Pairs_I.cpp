class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        string word;
        string compareWord;
        for(int i = 0; i < words.size() - 1; i++){
            word = words[i];
            for(int j = i + 1; j < words.size(); j++){
                compareWord = words[j];
                if(compareWord.length() < word.length()) continue;
                if(compareWord.substr(0,word.length()) == word && compareWord.substr(compareWord.length() - word.length()) == word) count++;
            }
        }
        return count;
    }
};

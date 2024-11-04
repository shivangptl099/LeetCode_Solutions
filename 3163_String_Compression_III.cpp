class Solution {
public:
    string compressedString(string word) {
        string ans;
        int i = 0;
        while(i < word.size()){
            char c = word[i];
            int count = 0;
            while(c == word[i] && count < 9){
                count++;
                i++;
            }
            ans += count + '0';
            ans += c;
        }
        return ans;
    }
};

class Solution {
public:
    long long countAtLeastK(string word, int k){
        int left = 0, right = 0, c = 0;
        long long validCount = 0;
        unordered_map<char, int> v;

        while(right < word.length()){
            if(isVowel(word[right]))
                v[word[right]]++;
            else c++;

            while(v.size() == 5 && c >= k){
                validCount += word.length() - right;
                if(isVowel(word[left])){
                    if(--v[word[left]] == 0) v.erase(word[left]);
                } else {
                    c--;
                }
                left++;
            }
            right++;
        }
        return validCount;
    }
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    long long countOfSubstrings(string word, int k) {
        return countAtLeastK(word, k) - countAtLeastK(word, k + 1);
    }
};

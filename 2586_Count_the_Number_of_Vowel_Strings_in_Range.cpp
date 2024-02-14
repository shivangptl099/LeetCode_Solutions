class Solution {
public:
    bool isVowel(string s)
    {   
        char c = s[0];
        char n = s[s.length() - 1];
        if((c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o') && 
           (n == 'a' || n == 'e' || n == 'i' || n == 'u' || n == 'o')) return true;
        else return false;
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        while(left <= right)
        {
            if(isVowel(words[left])) count++;
            left++;
        }
        return count;
    }
};

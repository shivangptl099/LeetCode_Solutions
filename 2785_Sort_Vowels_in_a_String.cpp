class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
        else return false;
    }
    string sortVowels(string s) {
        int i = 0;
        int len = s.length();
        unordered_map<char,int> mp;
        vector<int> vowelIndexes;
        for(int i = 0; i < len; i++){
            if(isVowel(s[i])){
                vowelIndexes.push_back(i);
                mp[s[i]]++;
            }
        }
        if(vowelIndexes.size() == 0) return s;
        char sampleArray[] = {'A','E','I','O','U','a','e','i','o','u'};
        int vowelIndexesIt = 0;
        for(int i = 0; i < 10; i++){
            if(mp.find(sampleArray[i]) != mp.end()){
                int freq = mp[sampleArray[i]];
                int j = 0;
                while(j < freq && vowelIndexesIt < vowelIndexes.size()){
                    s[vowelIndexes[vowelIndexesIt]] = sampleArray[i];
                    vowelIndexesIt++;
                    j++;
                }
            }
        }
        return s;
    }
};

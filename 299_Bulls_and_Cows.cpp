class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        int correctCount = 0;
        for(int i = 0; i < secret.length(); i++){
            if(secret[i] == guess[i]) correctCount++;
            mp1[secret[i]]++;
            mp2[guess[i]]++;
        }
        int sameCount = 0;
        for(auto it : mp1){
            auto it1 = mp2.find(it.first);
            if(it1 != mp2.end())
                sameCount += min(it.second,it1->second);
        }
        string s = to_string(correctCount) + "A" + to_string(sameCount - correctCount) + "B";
        return s;
    }
};

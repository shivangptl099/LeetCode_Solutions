class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(char c : text){
            mp[c]++;
        }
        int count = 0;
        while(1){
            if(mp['b'] >= 1 && mp['a'] >= 1 && mp['l'] >= 2 && mp['o'] >= 2 && mp['n'] >= 1){
                count++;
                mp['b']--;
                mp['a']--;
                mp['l'] -= 2;
                mp['o'] -= 2;
                mp['n']--;
            }
            else{
                break;
            }
        }
        return count;
    }
};

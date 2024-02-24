class Solution {
public:
    bool isFascinating(int n) {
        int twoN = n * 2;
        int threeN = n * 3;
        string s = to_string(n) + to_string(twoN) + to_string(threeN);
        unordered_map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        int count = 1;
        for(auto it : mp){
            if(it.first == '0' || it.second != 1){
                return false;
            }
            count++;
        }
        if(count != 10){
            return false;
        }
        return true;
    }
};

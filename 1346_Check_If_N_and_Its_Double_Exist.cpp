class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int x : arr){
            if(mp.contains(x * 2) || x % 2 == 0 && mp.contains(x / 2))
                return true;
            mp[x]++;
        }
        return false; 
    }
};

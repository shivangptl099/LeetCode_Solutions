class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i : arr){
            mp[i]++;
        }
        int max = -1;
        for(auto it : mp){
            if(it.first == it.second && it.first > max){
                max = it.first;
            }
        }
        return max;
    }
};

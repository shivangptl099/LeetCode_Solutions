class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int r = grid.size(), curr = 0;
        int n = r * r, a, b;
        bool found = false;
        set<int> mySet;
        for(auto &r : grid){
            for(auto &c : r){
                if(mySet.count(c)){
                    a = c;
                    found = true;
                }
                if(!found) mySet.insert(c);
                curr += c;
            }
        }
        b = (n * (n + 1) / 2) - (curr - a);
        return {a, b};
    }
};

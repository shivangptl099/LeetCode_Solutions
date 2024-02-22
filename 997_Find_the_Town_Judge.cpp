class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1) return 1;
        unordered_map <int,int> mp1;
        unordered_map <int,int> mp2;
        for(int i = 0; i < trust.size(); i++){
            int t1 = trust[i][0];
            int t2 = trust[i][1];
            mp1[t1]++;
            mp2[t2]++;
        }
        for(auto it: mp2){
            if(it.second == n - 1 && mp1.find(it.first) == mp1.end()){
                return it.first;
            }
        }
        return -1;
    }
};

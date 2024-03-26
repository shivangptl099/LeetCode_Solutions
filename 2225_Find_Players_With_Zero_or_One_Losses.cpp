class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> won;
        unordered_map<int,int> lost;
        for(int i = 0; i < matches.size(); i++){
            won[matches[i][0]]++;
            lost[matches[i][1]]++;
        }
        vector<int> winners;
        vector<int> losers;
        for(auto it : won)
            if(lost.find(it.first) == lost.end()) winners.push_back(it.first);
        for(auto it : lost)
            if(it.second <= 1) losers.push_back(it.first);
        sort(winners.begin(), winners.end());
        sort(losers.begin(), losers.end());
        return {winners, losers};
    }
};

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        if(n == 0) return {newInterval};
        int x = newInterval[0];
        int y = newInterval[1];
        vector<vector<int>> ans;
        // condition if the new interval does not even fit in the first interval
        if(x < intervals[0][0] && y < intervals[0][0]){
            ans.push_back({x,y});
            for(auto x : intervals)
                ans.push_back(x);
            return ans;
        }
        // that condition ends here
        int s = 0, e = n;
        while(s < n && intervals[s][1] < x) s++;
        for(int i = 0; i < s; i++)
            ans.push_back(intervals[i]);
        while(e > 0 && intervals[e - 1][0] > y) e--;
        if(s < n) x = min(x, intervals[s][0]);
        if(e > 0) y = max(y, intervals[--e][1]);
        if (s == n && e == 0) ans.push_back(newInterval);
        else ans.push_back({x, y});
        for(int i = e + 1; i < n; i++)
            ans.push_back(intervals[i]);
        return ans;
    }
};

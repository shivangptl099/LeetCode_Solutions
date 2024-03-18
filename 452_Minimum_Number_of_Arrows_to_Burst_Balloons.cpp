// Brute Force (First Logic)
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](vector<int> a, vector<int> b){
            return a[1] < b[1];
        });
        int s = 0;
        int ans = 0;
        while(s < points.size()){
            int e = s + 1;
            while(e < points.size() && points[s][1] <= points[e][1] && points[s][1] >= points[e][0]){
                e++;
            }
            s = e;
            ans++;
        }
        return ans;
    }
};

//Optimized solution
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() < 2) return 1;
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int ans = 1;
        int end = points[0][1];

        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > end) {
                ans++;
                end = points[i][1];
            }
        }

        return ans;
    }
};

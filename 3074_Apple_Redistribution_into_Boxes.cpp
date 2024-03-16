class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0, sum = 0, i, ans = 0;
        for(int x : apple)
            totalApples += x;
        sort(capacity.begin(), capacity.end());
        int n = capacity.size() - 1;
        for(i = n; i >= 0; i--){
            sum += capacity[i];
            ans++;
            if(sum >= totalApples) break;
        }
        return ans;
    }
};

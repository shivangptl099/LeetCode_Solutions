class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = (m + n) * mean;
        for(auto x : rolls) sum -= x;
        if(sum < n || sum > (6 * n)) return {};
        int div = sum / n;
        int rem = sum % n;
        vector<int> ans(n, div);
        for(int i = 0; i < n; i++)
            if(rem > 0){
                ans[i]++;
                rem--;
            }
        return ans;
    }
};

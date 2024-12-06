class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       set<int> banned_set(banned.begin(), banned.end());
       int i = 1, ans_sum = 0, ans_count = 0;
       while(i <= n){
            if(!banned_set.count(i) && ans_sum + i <= maxSum){
                    ans_sum += i;
                    ans_count++;
            }
            i++;
       }
       return ans_count;
    }
};

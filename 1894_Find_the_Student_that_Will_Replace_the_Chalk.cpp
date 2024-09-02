class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long total = 0;
        for(int x : chalk)
            total += x;
        k %= total;
        int i = 0;
        while(chalk[i] <= k){
            k -= chalk[i];
            i++;
        }
        return i;
    }
};

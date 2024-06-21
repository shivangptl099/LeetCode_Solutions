class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int s = 0, e = 0, ans = 0, maxGrumpyCust = 0, temp = 0;
        while(e < minutes){
            if(grumpy[e] == 1) temp += customers[e];
            e++;
        }
        while(e < customers.size()){
            maxGrumpyCust = max(maxGrumpyCust, temp);
            if(grumpy[s] == 0) ans += customers[s];
            else temp -= customers[s];
            if(grumpy[e] == 1) temp += customers[e];
            s++;
            e++;
        }
        maxGrumpyCust = max(maxGrumpyCust, temp);
        while(s < customers.size()){
            if(grumpy[s] == 0) ans += customers[s];
            s++;
        }
        return ans + maxGrumpyCust;
    }
};

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double n = customers.size();
        double totalTime = customers[0][0] + customers[0][1];
        double ans = totalTime - customers[0][0];
        int i = 1;
        while(i < n){
            if(customers[i][0] > totalTime) totalTime = customers[i][0];
            totalTime += customers[i][1];
            ans += totalTime - customers[i][0];
            i++;
        }
        return ans / n;
    }
};

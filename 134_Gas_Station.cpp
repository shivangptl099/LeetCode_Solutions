class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalTank = 0, tank = 0, start = 0;
        for (int i = 0; i < gas.size(); i++) {
            totalTank += gas[i] - cost[i];
            tank += gas[i] - cost[i];
            if (tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        return totalTank >= 0 ? start : -1;
    }
};

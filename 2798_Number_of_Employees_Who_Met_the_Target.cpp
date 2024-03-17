class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(), hours.end());
        int i;
        for(i = 0; i < hours.size(); i++){
            if(hours[i] >= target) break;
        }
        return hours.size() - i;
    }
};

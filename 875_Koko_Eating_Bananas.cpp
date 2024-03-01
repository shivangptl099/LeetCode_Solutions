class Solution {
public:
    double calcHour(vector<int>& piles, int mid){
        double total = 0;
        for(double x : piles){
            total += ceil(x / mid);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = INT_MIN;
        for(int x : piles){
            if(x > max) max = x;
        }
        int mid;
        int left = 1;
        int right = max;
        int ans = -1;
        while(left <= right){
            mid = left + ((right - left) / 2);
            double total = calcHour(piles,mid);
            if(total > h){
                left = mid + 1;
            } else {
                ans = mid;
                right = mid - 1;
            }
        }
        return ans;
    }
};

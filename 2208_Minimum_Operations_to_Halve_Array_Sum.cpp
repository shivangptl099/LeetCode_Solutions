class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        double sum = 0;
        for(int x : nums){
            sum += x;
            pq.push(x);
        }
        double target = (sum / 2.0);
        int ans = 0;
        while(sum > target){
            ans++;
            double temp = pq.top(); pq.pop();
            temp /= 2.0;
            sum -= temp;
            pq.push(temp);
        }
        return ans;
    }
};

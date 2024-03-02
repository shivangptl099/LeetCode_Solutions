class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
        int op = 0;
        while (pq.top() < k) {
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            long long temp = x * 2LL + y;
            pq.push(temp);
            op++;
        }
        return op;
    }
};

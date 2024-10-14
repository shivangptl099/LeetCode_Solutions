class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int x : nums){
            pq.push(x);
        }
        long long ans = 0;
        for(int i = 0; i < k; i++){
            int temp = pq.top(); pq.pop();
            ans += temp;
            pq.push(ceil(temp / 3.0));
        }
        return ans;
    }
};

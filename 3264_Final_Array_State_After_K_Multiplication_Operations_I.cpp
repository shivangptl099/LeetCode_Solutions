class Solution {
    #define p pair<int, int>
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        priority_queue<p, vector<p>, greater<p>> pq;
        for(int i = 0; i < n; i++){
            pq.push(make_pair(nums[i], i));
        }
        while(k--){
            p top_pair = pq.top();
            pq.pop();
            top_pair.first *= multiplier;
            pq.push(top_pair);
        }
        vector<int> ans(n);
        while(!pq.empty()){
            p top_pair = pq.top();
            pq.pop();
            int index = top_pair.second;
            ans[index] = top_pair.first;
        }
        return ans;
    }
};

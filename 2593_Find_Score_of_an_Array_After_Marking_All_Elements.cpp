class Solution {
    #define p pair<int, int>
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        priority_queue<p, vector<p>, greater<p>> minHeap;
        for(int i = 0; i < n; i++){
            minHeap.push(make_pair(nums[i], i));
        }
        unordered_set<int> marked_index;
        long long sum = 0;
        while(!minHeap.empty()){
            p curr = minHeap.top();
            minHeap.pop();
            int val = curr.first;
            int index = curr.second;
            if(marked_index.count(index)) continue;
            sum += val;
            marked_index.insert(index);
            marked_index.insert(index - 1);
            marked_index.insert(index + 1);
        }
        return sum;
    }
};

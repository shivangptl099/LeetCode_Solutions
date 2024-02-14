class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> pos_q;
        queue<int> neg_q;
        int i = 0;
        while(i < nums.size())
        {
            if(nums[i] >= 0) pos_q.push(nums[i]);
            else neg_q.push(nums[i]);
            i++;
        }
        i = 0;
        while(!pos_q.empty())
        {
            nums[i] = pos_q.front();
            nums[i + 1] = neg_q.front();
            pos_q.pop();
            neg_q.pop();
            i += 2;
        }
        return nums;
    }
};

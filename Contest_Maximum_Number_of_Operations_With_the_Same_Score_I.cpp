class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int sum = nums[0] + nums[1];
        int maxOp = 1;
        int i = 2;
        while(i < nums.size()){
            if((i + 1) < nums.size() && nums[i] + nums[i + 1] == sum){
                maxOp++;
                i += 2;
            }
            else{
                break;
            }
        }
        return maxOp;
    }
};

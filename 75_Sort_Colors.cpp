class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countOnes = 0;
        int countZeros = 0;
        int countTwos = 0;
        for(int x : nums){
            if(x == 0) countZeros++;
            else if(x == 1) countOnes++;
            else countTwos++;
        }
        int i = 0;
        while(countZeros > 0){
            nums[i] = 0;
            countZeros--;
            i++;
        }
        while(countOnes > 0){
            nums[i] = 1;
            countOnes--;
            i++;
        }
        while(countTwos > 0){
            nums[i] = 2;
            countTwos--;
            i++;
        }
    }
};

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int biggest = 0;
        int secondBiggest = 0;
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;
        for(int i : nums){
            if(i < smallest){
                secondSmallest = smallest;
                smallest = i;
            }
            else{
                secondSmallest = (secondSmallest > i) ? i : secondSmallest;
            }
            if(i > biggest){
                secondBiggest = biggest;
                biggest = i;
            }
            else{
                secondBiggest = (secondBiggest < i) ? i : secondBiggest;
            }
        }
        int ans = (biggest * secondBiggest) - (smallest * secondSmallest);
        return ans;
    }
};

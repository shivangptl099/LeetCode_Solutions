class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int rightShift = 0;
        while(left != right && left < right){
            rightShift++;
            left = left >> 1;
            right = right >> 1;
        }
        for(int i = 0; i < rightShift; i++){
            left = left << 1;
        }
        return left;
    }
};

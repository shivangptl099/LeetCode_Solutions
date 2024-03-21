class Solution {
public:
    bool judgeSquareSum(int c) {
        long x = 0;
        long y = floor(sqrt(c));
        long sum;
        while(x <= y){
            sum = (x*x) + (y*y);
            if(sum == c) return true;
            else if(sum < c) x++;
            else y--;
        }
        return false;
    }
};

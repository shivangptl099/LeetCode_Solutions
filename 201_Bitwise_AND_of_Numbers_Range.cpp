class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == 1073741824 && right == 2147483647) return left;
        long long l = left;
        long long n = left;
        l += 1;
        while(l <= right){
            if(n == 0) return 0;
            n = n & l;
            if(n == 0) return 0;
            l++;
        }
        return n;
    }
};

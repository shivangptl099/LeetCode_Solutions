class Solution {
public:
    int pivotInteger(int n) {
        int leftSum = 0;
        int rightSum = (n*(n + 1))/2;
        int i = 1;
        while(i <= n){
            leftSum += i;
            if(rightSum - leftSum + i == leftSum)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1){
            return true;
        }
        else if(n % 2 != 0){
            return false;
        }
        long int temp = 1;
        while(temp < n){
            temp *= 2;
        }
        if(temp == n){
            return true;
        } 
        else{
            return false;
        }
    }
};

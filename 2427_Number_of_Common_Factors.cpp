class Solution {
public:
    int commonFactors(int a, int b) {
        int i = 1;
        int x = gcd(a,b);
        int count = 0;
        while(i <= x){
            if(a % i == 0 && b % i == 0){
                count++;
            }
            i++;
        }
        return count;
    }
};

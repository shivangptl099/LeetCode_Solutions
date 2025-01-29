class Solution {
public:
    double myPow(double x, long long n) {
        if(n == 0 || x == 1) return 1;
        else if(n < 0) return 1 / pow(x, -n);

        double tempans = pow(x, n / 2);
        if(n % 2 == 1) return tempans * tempans * x;
        else return tempans * tempans;
    }
};

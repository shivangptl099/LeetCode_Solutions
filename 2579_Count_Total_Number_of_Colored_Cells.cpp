// Derived Equation
// TC: O(1)
class Solution {
public:
    long long coloredCells(int n) {
        return 1 + ((long long)2 * n * (n - 1));
    }
};

// Enumerated method 
// TC: O(N)
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1, i = 1;
        while(i < n){
            ans += (i * 4);
            i++;
        }
        return ans;
    }
};

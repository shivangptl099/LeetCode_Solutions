class Solution {
public:
    bool isSelfDividing(int n){
        int temp = n;
        while(temp > 0){
            int r = temp % 10;
            if(r == 0 || n % r != 0){
                return false;
            }
            temp /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        while(left <= right){
            if(isSelfDividing(left)) ans.push_back(left);
            left++;
        }
        return ans;
    }
};

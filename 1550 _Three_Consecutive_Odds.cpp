class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int x = 0, i = 0;
        while(i < arr.size()){
            if(arr[i] % 2 != 0) x++;
            else x = 0;
            if(x == 3) return true;
            i++;
        }
        return false;
    }
};

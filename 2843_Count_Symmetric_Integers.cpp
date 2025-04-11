class Solution {
public:
    vector<int> adjuster(int low, int high){
        if(low >= 1 && low <= 9){
            low = 10;
            if(low > high) return {};
        }
        if(low >= 100 && low <= 999){
            low = 1000;
            if(low > high) return {};
        }
        if(high >= 1 && high <= 9) return {};
        if(high >= 100 && high <= 999){
            high = 99;
            if(high < low) return {};
        }
        if(high == 10000) high == 9999;
        return {low, high};
    }
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        while(low <= high){
            string temp = to_string(low);
            int len = temp.length();
            if(len % 2 == 1){
                vector<int> nums = adjuster(low, high);
                if(nums.size() == 0) return ans;
                low = nums[0];
                high = nums[1];
                temp = to_string(low);
                len = temp.length();
            }
            if(len == 2){
                int ans1 = (temp[0] - '0');
                int ans2 = (temp[1] - '0');
                if(ans1 == ans2) ans++;
            } else {
                int ans1 = (temp[0] - '0') + (temp[1] - '0');
                int ans2 = (temp[2] - '0') + (temp[3] - '0');
                if(ans1 == ans2) ans++;
            }
            low++;
        }
        return ans;
    }
};

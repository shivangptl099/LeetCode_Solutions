class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        vector<int> left(len);
        vector<int> right(len);

        int max1 = height[0];
        left[0] = height[0];
        for(int i = 1; i < len; i++){
            max1 = max(height[i], max1);
            left[i] = max1;
        }

        max1 = height[len - 1];
        right[len - 1] = height[len - 1];
        for(int i = len - 2; i >= 0; i--){
            max1 = max(height[i], max1);
            right[i] = max1;
        }
        int ans = 0;
        for(int i = 0; i < len; i++)
            ans += min(left[i], right[i]) - height[i];
        return ans;
    }
};

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN;
        int start = 0;
        int end = height.size() - 1;
        int l,b;
        while(start < end){
            l = min(height[start],height[end]);
            b = end - start;
            if(max < l * b){
                max = l * b;
            }
            if(height[start] > height[end]){
                end--;
            } else if(height[start] < height[end]){
                start++;
            } else {
                if(start + 1 < end - 1){
                    if(height[start + 1] >= height[end - 1]){
                        start++;
                    } else {
                        end--;
                    }
                } else {
                    break;
                }
            }
        }
        return max;
    }
};

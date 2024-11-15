class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        while(r > 0 && arr[r] >= arr[r - 1]){
            r--;
        }
        int ans = r;
        while(l < r){
            while(r < n && arr[l] > arr[r]){
                r++;
            }
            ans = min(ans, r - l - 1);
            l++;
            if(arr[l] < arr[l - 1]){
                break;
            }
        }
        return ans;
    }
};

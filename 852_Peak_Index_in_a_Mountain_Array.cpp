class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int h = arr.size() - 1;
        while(l <= h){
            int m = l + ((h - l) / 2);
            if(m - 1 >= 0 && m + 1 < arr.size() && arr[m] >= arr[m + 1] && arr[m] >= arr[m - 1]){
                return m;
            }
            if(m + 1 < arr.size() && arr[m] > arr[m + 1]) {
                h = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return 0;
    }
};

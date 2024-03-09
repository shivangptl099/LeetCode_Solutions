class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int p = 0, q = 0;
        while(p < nums1.size() && q < nums2.size()){
            if(nums1[p] == nums2[q]){
                return nums1[p];
            }
            else if(nums1[p] < nums2[q]){
                p++;
            } else {
                q++;
            }
        }
        return -1;
    }
};

class Solution {
    using ll = long long;
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        ll n = nums.size();
        ll l = 0, r = 0;
        ll ans = 0, curr = 0;
        while(l < n){
            while(r < n && (curr + nums[r]) * (r - l + 1) < k){
                curr += nums[r++];
            }
            ans += r - l;
            if(r == l){
                r++;
            } else {
                curr -= nums[l];
            }
            l++;
        }
        return ans;
    }
};

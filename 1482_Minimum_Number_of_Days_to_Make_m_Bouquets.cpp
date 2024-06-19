class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long multi = (long long)m * k;
        if(multi > n) return -1;
        int h = INT_MIN, l = INT_MAX;
        for(int x : bloomDay){
            h = max(x, h);
            l = min(x, l);
        }
        int ans = h;
        while(l <= h){
            int mid = l + ((h - l) / 2);
            int i = 0, curr = 0, b = m;
            while(i < n){
                if(bloomDay[i] > mid){
                    curr /= k;
                    b -= curr;
                    curr = 0;
                } else curr++;
                i++;
            }
            curr /= k;
            b -= curr;
            if(b <= 0){
                ans = mid;
                h = mid - 1;
            } else l = mid + 1;
        }
        return ans;
    }
};

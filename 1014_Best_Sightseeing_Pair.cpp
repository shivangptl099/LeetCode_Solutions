class Solution {
 public:
  int maxScoreSightseeingPair(vector<int>& values) {
    int ans = 0, maxi = 0;
    for (int x : values) {
      ans = max(ans, x + maxi);
      maxi = max(maxi, x) - 1;
    }
    return ans;
  }
};

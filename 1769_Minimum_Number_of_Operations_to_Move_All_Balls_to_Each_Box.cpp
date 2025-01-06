class Solution {
public:
    vector<int> minOperations(string boxes) {
      set<int> st;
      int n = boxes.length();
      for(int i = 0; i < n; i++) if(boxes[i] == '1') st.insert(i);
      vector<int> ans(n);
      for(int i = 0; i < n; i++){
        int curr = 0;
        for(auto x : st){
            if(x == i) continue;
            else curr += (abs(i - x));
        }
        ans[i] = curr;
      }
      return ans;
    }
};

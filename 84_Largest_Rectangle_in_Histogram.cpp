class Solution {
public:
    vector<int> prevSmall(vector<int>& a) {
        vector<int> ps(a.size(), 0);
        stack<int> st;
        for(int i = 0; i < a.size(); i++){
            while(!st.empty() && a[st.top()] >= a[i]) st.pop();
            if(st.empty()) ps[i] = -1;
            else ps[i] = st.top();
            st.push(i);
        }
        return ps;
    }
    vector<int> nextSmall(vector<int>& a) {
        vector<int> ns(a.size(), 0);
        stack<int> st;
        for(int i = a.size() - 1; i >= 0; i--){
            while(!st.empty() && a[st.top()] >= a[i]) st.pop();
            if(st.empty()) ns[i] = a.size();
            else ns[i] = st.top();
            st.push(i);
        }
        return ns;
    }

    int largestRectangleArea(vector<int>& heights) {
        int maxArea = INT_MIN, area;
        vector<int> ps = prevSmall(heights);
        vector<int> ns = nextSmall(heights);
        for(int i = 0; i < heights.size(); i++){
            area = (ns[i] - ps[i] - 1) * heights[i];
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};

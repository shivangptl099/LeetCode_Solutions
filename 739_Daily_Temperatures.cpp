class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> ans(temperatures.size());
        int i = temperatures.size() - 1;
        while(i >= 0){
            if(st.empty()){
                st.push(i);
                ans[i] = 0;
            }
            else{
                while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                    st.pop();
                }
                if(!st.empty()){
                    ans[i] = st.top() - i;
                    st.push(i);
                } else {
                    ans[i] = 0;
                    st.push(i);
                }
            }
            i--;
        }
        return ans;
    }
};

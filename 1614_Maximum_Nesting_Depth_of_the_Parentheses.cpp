class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int temp = 0;
        stack<char> st;
        for(char c : s){
            if(c == '('){
                st.push('(');
                temp++;
            } else if(c == ')') {
                st.pop();
                temp--;
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};

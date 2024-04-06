class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int i = 0;
        while(i < s.length()){
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')')
                if(!st.empty() && s[st.top()] == '(') st.pop();
                else st.push(i);
            i++;
        }    
        while(!st.empty()){
            int index = st.top();
            st.pop();
            s = s.substr(0,index) + s.substr(index + 1);
        }
        return s;
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int i = 0;
        while(i < tokens.size()){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if(tokens[i] == "+") st.push(a + b);
                else if(tokens[i] == "-") st.push(a - b);
                else if(tokens[i] == "*") st.push(a * b);
                else st.push(a / b);
            } else st.push(stoi(tokens[i]));
            i++;
        }
        return st.top();
    }
};

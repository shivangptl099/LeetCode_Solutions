class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> myStack;
        int i = 0;
        while(i < s.length()){
            if(s[i] == ')'){
                int start = myStack.top() + 1;
                int end = i;
                reverse(s.begin() + start, s.begin() + end);
                myStack.pop();
            } 
            else if(s[i] == '(') myStack.push(i);
            i++;
        }
        string ans;
        for(i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == ')') continue;
            else ans += s[i];
        }
        return ans;
    }
};

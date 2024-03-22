class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* p = head;
        vector<int> ans;
        while(p){
            ans.push_back(p -> val);
            p = p -> next;   
        }
        stack<int> st;
        for(int i = ans.size() - 1; i >= 0; i--){
            if(st.empty()){
                st.push(ans[i]);
                ans[i] = 0;
            }
            else{
                while(!st.empty() && ans[i] >= st.top()){
                    st.pop();
                }
                if(!st.empty()){
                    int temp = ans[i];
                    ans[i] = st.top();
                    st.push(temp);
                } else {
                    st.push(ans[i]);
                    ans[i] = 0;
                }
            }
        }
        return ans;
    }
};

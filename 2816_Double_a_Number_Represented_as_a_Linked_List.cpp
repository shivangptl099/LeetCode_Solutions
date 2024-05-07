class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        stack<int> st1,st2;
        ListNode* p = head;
        while(p){
            st1.push(p->val);
            p = p->next;
        }
        int temp, x = 0;
        while(!st1.empty()){
            temp = st1.top() * 2 + x;
            st1.pop();
            st2.push(temp % 10);
            x = temp / 10;
        }
        if(x != 0) st2.push(x);
        p = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* q = dummy;
        while(p && !st2.empty()){
            p->val = st2.top();
            st2.pop();
            p = p->next;
            q = q->next;
        }
        if(!st2.empty()){
            ListNode* s = new ListNode(st2.top());
            q->next = s;
        }
        return head;
    }
};

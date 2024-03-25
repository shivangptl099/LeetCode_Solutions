class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p = head;
        int n = 0;
        while(p){
            n++;
            p = p->next;
        }
        if(n < 2) return head;
        int end = n - k + 1;
        p = head;
        ListNode *s1 = nullptr,*s2 = nullptr;
        int i = 0;
        while(p){
            i++;
            if(i == k) s1 = p;
            if(i == end) s2 = p;
            p = p->next;
        }
        int temp = s1->val;
        s1->val = s2->val;
        s2->val = temp;
        return head;
    }
};

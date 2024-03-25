class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = head;
        ListNode* p = dummy;
        while(fast && fast->next){
            fast = fast->next->next;
            p = p->next;
        }
        p->next = p->next->next;
        return dummy->next;
    }
};

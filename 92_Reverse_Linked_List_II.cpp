class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            ListNode* nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right){
            return head;
        }
        ListNode* dummy = new ListNode();
        dummy -> next = head;
        ListNode *l1 = dummy, *l2 = dummy;
        for(int i = 0; i < right; i++){
            if(i < left - 1){
                l1 = l1 -> next;
            }
            l2 = l2 -> next;
        }
        ListNode *head1 = l1 -> next;
        ListNode *tail = l2 -> next;
        l2 -> next = NULL;
        l1 -> next = reverseList(head1);
        head1 -> next = tail;
        return dummy -> next;
    }
};

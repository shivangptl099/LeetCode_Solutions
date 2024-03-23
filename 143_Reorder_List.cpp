class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if (!head || !head->next)
            return;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        ListNode* l2 = reverseList(slow -> next);
        slow -> next = nullptr;
        ListNode* l1 = head;
        while(l2){
            ListNode* temp1 = l1 -> next;
            ListNode* temp2 = l2 -> next;
            l1 -> next = l2;
            l2 -> next = temp1;
            l1 = temp1;
            l2 = temp2;
        }
    }
};

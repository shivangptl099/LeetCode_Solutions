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
    ListNode* midpoint(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    bool isPalindrome(ListNode* head) {
        if (!head || !head -> next)
            return true;
        ListNode* l2 = midpoint(head);
        l2 = reverseList(l2);
        while (l2) {
            if (head -> val != l2 -> val)
                return false;
            head = head -> next;
            l2 = l2 -> next;
        }
        return true;
    }
};

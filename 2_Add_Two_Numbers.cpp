/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* p = ans;
        int sum, carry = 0;
        while(l1 != NULL || l2 != NULL){
            sum = 0 + carry;
            if(l1 != NULL){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            carry = sum / 10;
            sum = sum % 10;
            p -> next = new ListNode(sum);
            p = p -> next;
        }
        if(carry > 0) p -> next = new ListNode(carry);
        return ans->next;
    }
};

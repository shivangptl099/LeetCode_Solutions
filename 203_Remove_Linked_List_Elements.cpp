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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* p = dummy;
        ListNode* q = head;
        while(q != NULL){
            if(q -> val == val){
                p -> next = q -> next;
                q = p -> next;
            } else {
                p = p -> next;
                q = p -> next;
            }
        }
        return dummy -> next;
    }
};

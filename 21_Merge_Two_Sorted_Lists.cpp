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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* ptr = head;
        ListNode* p = list1;
        ListNode* q = list2;
        while(p != NULL || q != NULL){
            if(p != NULL && q != NULL){
                if(p -> val <= q -> val){
                ptr -> next = new ListNode(p -> val);
                ptr = ptr -> next;
                p = p -> next;
                } else {
                ptr -> next = new ListNode(q -> val);
                ptr = ptr -> next;
                q = q -> next;
                }
            } else if(p != NULL){
                ptr -> next = new ListNode(p -> val);
                ptr = ptr -> next;
                p = p -> next;
            } else {
                ptr -> next = new ListNode(q -> val);
                ptr = ptr -> next;
                q = q -> next;
            }
        }
        return head -> next;
    }
};

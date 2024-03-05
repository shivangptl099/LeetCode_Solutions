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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0) return head;
        ListNode* p = head;
        int n = 0;
        while(p != NULL){
            n++;
            p = p -> next;
        }
        if(n < 2) return head;
        int rotation = k % n;
        if(rotation == 0) return head;
        ListNode* dummy = new ListNode();
        dummy -> next = head;
        p = dummy;
        ListNode* q = dummy;
        int x = 0;
        while(p -> next != NULL){
            p = p -> next;
            x++;
            if(x > rotation){
                q = q -> next;
            }
        }
        ListNode* r = q -> next;
        q -> next = NULL;
        p -> next = head;
        head = r;
        return head;
    }
};

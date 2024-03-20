class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* dummy = new ListNode();
        dummy -> next = list1;
        ListNode* p = dummy;
        int s = 0;
        while(s < a){
            p = p -> next;
            s++;
        }
        ListNode* q = p -> next;
        s++;
        p -> next = list2;
        while(s <= b + 1){
            q = q -> next;
            s++;
        }
        ListNode* r = list2;
        while(r -> next != NULL){
            r = r -> next;
        }
        r -> next = q;
        return dummy -> next;
    }
};

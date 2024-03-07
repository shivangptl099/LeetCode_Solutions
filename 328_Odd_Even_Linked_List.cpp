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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* p = head;
        vector<int> odd;
        vector<int> even;
        int i = 1;
        while(p != NULL){
            if(i % 2 == 0){
                even.push_back(p -> val);
            } else {
                odd.push_back(p -> val);
            }
            p = p -> next;
            i++;
        }
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;
        for(int x : odd){
            ptr -> next = new ListNode(x);
            ptr = ptr -> next;
        }
        for(int x : even){
            ptr -> next = new ListNode(x);
            ptr = ptr -> next;
        }
        return ans -> next;
    }
};

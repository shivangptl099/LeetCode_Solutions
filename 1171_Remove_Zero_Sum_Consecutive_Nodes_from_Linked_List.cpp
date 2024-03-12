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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int, ListNode*> mp;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* ptr = dummy;
        int sum;
        while(ptr != NULL){
            sum += ptr -> val;
            if(mp.find(sum) == mp.end()){
                mp[sum] = ptr;
            } else {
                ListNode* temp1 = mp[sum];
                temp1 -> next = ptr -> next;
                mp.clear();
                ptr = dummy;
                sum = 0;
                continue;
            }
            ptr = ptr -> next;
        }
        return dummy -> next;
    }
};

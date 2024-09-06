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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> mySet;
        for(int i = 0; i < nums.size(); i++) mySet.insert(nums[i]);
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* p = head;
        ListNode* q = dummy;
        while(p){
            if(mySet.count(p->val) > 0){
                q->next = p->next;
            } else {
                q = q->next;
            }
            p = p->next;
        }
        return dummy->next;
    }
};

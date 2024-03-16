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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> mp;
        ListNode* p = head;
        while(p != NULL){
            mp[p -> val]++;
            p = p -> next;
        }
        vector<int> values;
        for(auto it : mp){
            if(it.second == 1){
                values.push_back(it.first);
            }
        }
        sort(values.begin(), values.end());
        ListNode* dummy = new ListNode(0);
        p = dummy;
        for(int x : values){
            ListNode* temp = new ListNode(x);
            p -> next = temp;
            p = temp;
        }
        return dummy -> next;
    }
};

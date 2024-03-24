class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> left;
        vector<int> right;
        ListNode* p = head;
        while(p){
            if(p -> val < x) left.push_back(p -> val);
            else right.push_back(p -> val);
            p = p -> next;
        }
        p = head;
        int i = 0;
        while(p && i < left.size()){
            p -> val = left[i++];
            p = p -> next;
        }
        i = 0;
        while(p && i < right.size()){
            p -> val = right[i++];
            p = p -> next;
        }
        return head;
    }
};

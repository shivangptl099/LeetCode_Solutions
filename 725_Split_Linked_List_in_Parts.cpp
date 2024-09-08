class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        ListNode* p = head;
        while(p){
            ++len;
            p = p->next;
        }
        int div = len / k;
        int rem = len % k;
        vector<ListNode*> ans;
        p = head;
        for(int i = 0; i < k; i++){
            int curr_size = div + (i < rem ? 1 : 0);
            if(curr_size == 0){
                ListNode* temp = nullptr;
                ans.push_back(temp);
            } else {
                int j = 1;
                ListNode* temp = p;
                while(j < curr_size){
                    p = p->next;
                    j++;
                }
                ListNode* q = p->next;
                p->next = nullptr;
                p = q;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};

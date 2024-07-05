class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head->next->next) return {-1,-1};
        ListNode* p = head;
        ListNode* q = p->next;
        ListNode* r = q->next;
        vector<int> indexes;
        int i = 2;
        while(r){
            if(q->val > p->val && q->val > r->val) indexes.push_back(i);
            else if(q->val < p->val && q->val < r->val) indexes.push_back(i);
            p = p->next;
            q = q->next;
            r = r->next;
            i++;
        }
        if(indexes.size() < 2) return {-1,-1};
        int max_ans = indexes[indexes.size() - 1] - indexes[0];
        if(indexes.size() == 2) return {max_ans, max_ans};
        int min_ans = INT_MAX;
        for(int i = 0; i < indexes.size() - 1; i++){
            min_ans = min(min_ans, indexes[i + 1] - indexes[i]);
        }
        return {min_ans, max_ans};
    }
};

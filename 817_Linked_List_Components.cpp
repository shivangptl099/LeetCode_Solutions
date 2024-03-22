class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        set<int> mySet;
        for(int x : nums)
            mySet.insert(x);
        int ans = 0;    
        ListNode* p = head;
        bool found = false;
        while(p){
            if(mySet.count(p -> val))
                found = true;
            else if(found){
                ans++;
                found = false;
            }
            p = p -> next;
        }
        if(found) ans++;
        return ans;
    }
};

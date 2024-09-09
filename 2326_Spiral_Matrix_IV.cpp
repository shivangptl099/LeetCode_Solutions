class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int> (n));
        int s = 0;
        ListNode* p = head;
        int left = 0, top = 0;
        int bottom = m - 1;
        int right = n - 1;
        while(s < m * n){
            for(int i = left; i <= right && s < m * n; i++){
                if(p){
                    ans[top][i] = p->val;
                    p = p->next;
                } else {
                    ans[top][i] = -1;
                }
                s++;
            }
            top++;
            for(int i = top; i <= bottom && s < m * n; i++){
                if(p){
                    ans[i][right] = p->val;
                    p = p->next;
                } else {
                    ans[i][right] = -1;
                }
                s++;
            }
            right--;
            for(int i = right; i >= left && s < m * n; i--){
                if(p){
                    ans[bottom][i] = p->val;
                    p = p->next;
                } else {
                    ans[bottom][i] = -1;
                }
                s++;
            }
            bottom--;
            for(int i = bottom; i >= top && s < m * n; i--){
                if(p){
                    ans[i][left] = p->val;
                    p = p->next;
                } else {
                    ans[i][left] = -1;
                }
                s++;
            }
            left++;
        }
        return ans;
    }
};

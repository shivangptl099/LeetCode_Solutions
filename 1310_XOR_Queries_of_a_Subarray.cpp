class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int sum = 0;
        int len = arr.size();
        vector<int> pre(len);
        for(int i = 0; i < len; i++){
            sum ^= arr[i];
            pre[i] = sum;
        }
        int q = queries.size();
        int i = 0;
        vector<int> ans(q);
        while(i < q){
            int start = queries[i][0];
            int end = queries[i][1];
            int x = 0;
            if(start - 1 >= 0) x = pre[start - 1];
            int y = pre[end];
            ans[i] = x ^ y;
            i++;
        }
        return ans;
    }
};

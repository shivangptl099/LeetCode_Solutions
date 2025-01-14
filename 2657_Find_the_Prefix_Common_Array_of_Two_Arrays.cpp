class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), count = 0;
        vector<int> freq(n, 0), ans(n);
        for(int i = 0; i < n; i++){
            freq[A[i] - 1]++;
            freq[B[i] - 1]++;
            if(A[i] != B[i]){
                if(freq[A[i] - 1] == 2) count++;
                if(freq[B[i] - 1] == 2) count++;
            } else {
                if(freq[A[i] - 1] == 2) count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};

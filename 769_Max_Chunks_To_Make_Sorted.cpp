class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int left_sum = arr[0];
        int parts = 1;
        for(int i = 1; i < arr.size(); i++){
            int req_sum = i * (i - 1) / 2;
            if(req_sum == left_sum) parts++;
            left_sum += arr[i];
        }
        return parts;
    }
};

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int current = arr[0];
        int win_count = 0;
        int n = arr.size();
        int i = 1;
        while(i < n){
            if(arr[i] > current){
                current = arr[i];
                win_count = 1;
            } 
            else win_count++;
            if(win_count == k) break;
            i++;
        }
        return current;
    }
};

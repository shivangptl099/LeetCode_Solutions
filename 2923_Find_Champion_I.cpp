class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n, 0);
        int i = 0;
        while(i < n){
            int j = 0;
            while(j < n){
                if(grid[i][j]) freq[j]++;
                j++;
            }
            i++;
        }
        i = 0;
        while(i < n){
            if(freq[i] == 0) return i;
            i++;
        }
        return -1;
    }
};

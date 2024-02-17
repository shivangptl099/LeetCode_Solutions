// Brute Force method
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int l = 0;
        int h = col - 1;
        int i = 0;
        while(l <= h && i < row)
        {
            int mid = l + ((h - l)/2);
            if(matrix[i][mid] == target) return true;
            else if(target <= matrix[i][col -1])
            {
                if(target > matrix[i][mid]) l = mid + 1;
                else h = mid - 1;
            }
            else
            {
                i++;
                l = 0;
                h = col - 1;
            }
        }
        return false;
    }
};


// Optimized Approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = n - 1;
        while(i < m && j >= 0){
            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] < target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};

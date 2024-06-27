class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i = 1;
        while(i < matrix.size()){
            int j = 1;
            while(j < matrix[0].size()){
                if(matrix[i][j] != matrix[i - 1][j - 1]){
                    return false;
                }
                j++;
            }
            i++;
        }
        return true;
    }
};

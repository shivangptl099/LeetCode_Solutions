class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        unordered_map<int,int> mp1,mp2;
        for(int i  = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                if(matrix[i][j] == 0){
                    mp1[i]++;
                    mp2[j]++;
                }
        for(int i  = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                if(mp1.find(i) != mp1.end() || mp2.find(j) != mp2.end())
                    matrix[i][j] = 0;
    }
};

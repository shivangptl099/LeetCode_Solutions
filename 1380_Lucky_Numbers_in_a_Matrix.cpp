class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> minElements;
        vector<int> maxElements;
        for(int i = 0; i < matrix.size(); i++){
            int minEle = matrix[i][0];
            for(int k = 0; k < matrix[0].size(); k++)
                minEle = min(minEle, matrix[i][k]);
            minElements.push_back(minEle);
        }
        for(int i = 0; i < matrix[0].size(); i++){
            int maxEle = matrix[0][i];
            for(int k = 0; k < matrix.size(); k++)
                maxEle = max(maxEle, matrix[k][i]);
            maxElements.push_back(maxEle);
        }
        vector<int> ans;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++)
                if(maxElements[j] == matrix[i][j] && minElements[i] == maxElements[j]) ans.push_back(matrix[i][j]);
        }
        return ans;
    }
};

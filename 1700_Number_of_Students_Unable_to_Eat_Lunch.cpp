class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int countOnes = 0;
        int countZeros = 0;
        for(int x : students)
            if(x == 0) countZeros++;
            else countOnes++;
        int i = 0, len = sandwiches.size();
        while(i < len){
            if(sandwiches[i] == 0){
                if(countZeros == 0){
                    break;
                } else {
                    countZeros--;
                }
            } else {
                if(countOnes == 0){
                    break;
                } else {
                    countOnes--;
                }
            }
            i++;
        }
        return len - i;
    }
};

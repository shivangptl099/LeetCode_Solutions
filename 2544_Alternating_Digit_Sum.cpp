class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        int i = 0;
        int flag = 1;
        while(i < s.length())
        {
            int temp = s[i] - '0';
            if(flag == 1) flag = 0;
            else{
                temp *= (-1);
                flag = 1;
            }
            sum += temp;
            i++;
        }
        return sum;
    }
};

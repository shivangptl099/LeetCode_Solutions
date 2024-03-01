class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOnes = 0;
        for(char c : s){
            if(c == '1') countOnes++;
        }
        int countZeros = s.length() - countOnes;
        string ans;
        while(countZeros > 0){
            ans += '0';
            countZeros--;
        }
        ans += '1';
        countOnes--;
        if(countOnes > 0){
            string temp;
            while(countOnes > 0){
                temp += '1';
                countOnes--;
            }
            ans = temp + ans;
        }
        return ans;
    }
};

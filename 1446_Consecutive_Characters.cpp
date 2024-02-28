class Solution {
public:
    int maxPower(string s) {
        int max = 0;
        int count = 1;
        int i = 0;
        while(i < s.length()){
            if(s[i] == s[i + 1]){
                count++;
            } else {
                if(max < count){
                    max = count;
                }
                count = 1;
            }
            i++;
        }
        return max;
    }
};

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string ans;
        int i,j,n,remain,diff;
        n = s.length();
        diff = (numRows - 1) * 2;
        for(i = 0; i < numRows; i++){
            j = i;
            if(i == 0 || i == numRows - 1)
                for(j; j < n; j += diff) 
                    ans += s[j];
            else{
                remain = (numRows - 1 - i) * 2;
                while(j < n){
                    ans += s[j];
                    j += remain;
                    if(j >= n) break;
                    ans += s[j];
                    j += diff - remain;
                }
            }
        }
        return ans;
    }
};

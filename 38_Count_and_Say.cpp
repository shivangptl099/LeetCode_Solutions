class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        int i = 0;
        string s = "1";
        string ans;
        int count;
        while(i < n - 1){
            count = 1;
            int j = 1;
            while(j < s.length()){
                if(s[j] == s[j - 1]){
                    count++;
                }
                else{
                    ans += to_string(count) + s[j - 1];
                    count = 1;
                }
                j++;
            }
            ans += to_string(count) + s[j - 1];
            s = ans;
            ans = "";
            i++;
        }
        return s;
    }
};

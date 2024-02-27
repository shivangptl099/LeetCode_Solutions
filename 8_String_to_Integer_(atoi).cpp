class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long long ans = 0;
        int sign = 1;
        while(i < s.length() && s[i] == ' '){
            i++;
        }
        if(i < s.length() && (s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while(i < s.length() && isdigit(s[i])){
            ans = (ans * 10) + (s[i] - '0');
            if(to_string(ans).length() > 9){
                if(ans*sign < INT_MIN) return INT_MIN;
                else if(ans*sign > INT_MAX) return INT_MAX;
            }
            i++;
        }
        return ans*sign;
    }
};

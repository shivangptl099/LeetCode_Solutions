class Solution {
public:
    string toBinary(int n){
        string binary = "";
        while(n > 0){
            binary = (n % 2 == 0 ? "0" : "1") + binary;
            n /= 2;
        }
        return binary.empty() ? "0" : binary;
    }

    int minBitFlips(int start, int goal) {
        int n1 = max(start, goal);
        int n2 = min(start, goal);
        string s1 = toBinary(n1);
        string s2 = toBinary(n2);
        int len = s1.length();
        while(len != s2.length())
            s2 = "0" + s2;
        int ans = 0;
        for(int i = 0; i < len; i++)
            if(s1[i] != s2[i]) ans++;
        return ans;
    }
};

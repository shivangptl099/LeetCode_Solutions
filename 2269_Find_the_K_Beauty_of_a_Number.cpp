class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int i = 0;
        int count = 0;
        while(i <= s.length() - k){
            string s1 = s.substr(i,k);
            int n = stoi(s1);
            if(n != 0 && num % n == 0){
                count++;
            }
            i++;
        }
        return count;
    }
};

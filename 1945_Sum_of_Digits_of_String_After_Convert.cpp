class Solution {
public:
    int getLucky(string s, int k) {
        int i = 0, ans = 0;
        string temp;
        while(i < s.length()){
            temp += to_string(s[i] - 'a' + 1);
            i++;
        }
        i = 0;
        while(i < k){
            int sum = 0;
            int j = 0;
            while(j < temp.length()){
                sum += temp[j] - '0';
                j++;
            }
            ans = sum;
            temp = to_string(sum);
            i++;
        }
        return ans;
    }
};

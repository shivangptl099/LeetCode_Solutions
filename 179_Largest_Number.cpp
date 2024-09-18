class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> sorted;
        for(int x : nums){
            sorted.push_back(to_string(x));
        }
        sort(sorted.begin(), sorted.end(), [](string a, string b){
            return (a + b > b + a);
        });
        string ans;
        for(string s : sorted){
            ans += s;
        }
        if(ans[0] == '0'){
            return "0";
        }
        return ans;
    }
};

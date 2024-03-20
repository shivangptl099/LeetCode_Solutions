class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> s;
        for(int i = 1; i <= n; i++)
            s.push_back(to_string(i));
        sort(s.begin(), s.end());
        vector<int> ans;
        for(string s1 : s)
            ans.push_back(stoi(s1));
        s.clear();
        return ans;
    }
};

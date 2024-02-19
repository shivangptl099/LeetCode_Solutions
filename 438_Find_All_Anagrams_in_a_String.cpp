class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        sort(p.begin(),p.end());
        int m = p.length();
        int n = s.length();
        int i = 0;
        while(i <= n - m){
            string temp = s.substr(i,m);
            sort(temp.begin(),temp.end());
            if(temp == p) ans.push_back(i);
            i++;
        }
        return ans;
    }
};

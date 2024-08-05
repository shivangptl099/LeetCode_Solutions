class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp1;
        for(string s : arr)
            mp1[s]++;
        unordered_map<string, int> mp2;
        for(auto it : mp1)
            if(it.second == 1) mp2[it.first]++;
        vector<string> uniqueStrings;
        for(string s : arr){
            if(mp2[s] == 1) uniqueStrings.push_back(s);
        }
        if(uniqueStrings.size() < k) return "";
        return uniqueStrings[k - 1];
    }
};

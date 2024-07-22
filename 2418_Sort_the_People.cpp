class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> mp;
        int i = 0;
        while(i < names.size()){
            mp[heights[i]] = names[i];
            i++;
        }
        sort(heights.begin(), heights.end(), greater<>());
        i = 0;
        while(i < names.size()){
            names[i] = mp[heights[i]];
            i++;
        }            
        return names;
    }
};

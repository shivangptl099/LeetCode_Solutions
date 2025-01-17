class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int XOR = 0, n = derived.size();
        for(int i = 0; i < n; i++) XOR ^= derived[i];
        return XOR == 0;
    }
};

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> mySet;
        int n = digits.size();
        for(int i = 0; i < n; i++){
            if(digits[i] == 0) continue;
            int curr = 100 * digits[i];
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                int curr1 = curr + 10 * digits[j];
                for(int k = 0; k < n; k++){
                    if(k == i || k == j) continue;
                    if(digits[k] % 2 == 0){
                        mySet.insert(curr1 + digits[k]);
                    }
                }
            }
        }
        vector<int> ans;
        for(int x : mySet) ans.push_back(x);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

class Solution {
public:
    int kthFactor(int n, int k) {
        set<int> mySet;
        int i,ans;
        for(i = 1; i <= n; i++)
            if(n % i == 0) mySet.insert(i);
        if(mySet.size() < k) return -1;
        i = 0;
        for(auto it : mySet){
            i++;
            if(i == k){
                ans = it;
                break;
            }
        }
        return ans;
    }
};

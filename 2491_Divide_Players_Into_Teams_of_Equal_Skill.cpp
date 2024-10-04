class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int sum = 0, n = skill.size(), k = n / 2;
        for(int x : skill) sum += x;
        if(sum % k != 0) return -1;
        unordered_map<int, int> mp;
        int target = sum / k;
        long long ans = 0;
        for(int i = 0; i < skill.size(); i++){
            int x = target - skill[i];
            if(mp.find(x) != mp.end()){
                mp[x]--;
                if(mp[x] == 0) mp.erase(x);
                ans += (long long) skill[i] * x;
            } else {
                mp[skill[i]]++;
            }
        }
        if(mp.size() != 0) return -1;
        return ans;
    }
};

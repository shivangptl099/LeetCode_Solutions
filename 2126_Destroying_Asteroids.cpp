class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long m = mass;
        for(int x : asteroids){
            if(m < x){
                return false;
            } else {
                m += x;
                if(m >= asteroids[asteroids.size() - 1]) return true;
            } 
        }
        return true;
    }
};

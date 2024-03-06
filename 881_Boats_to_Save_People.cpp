class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int s = 0, boat = 0, e = people.size() - 1;
        while(s <= e){
            if(people[s] + people[e] <= limit) s++;
            e--;
            boat++;
        }
        return boat;
    }
};

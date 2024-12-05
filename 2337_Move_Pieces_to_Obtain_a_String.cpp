class Solution {
public:
    bool canChange(string start, string target) {
        string order1, order2;
        int lCount1 = 0, rCount1 = 0, lCount2 = 0, rCount2 = 0;
        for(auto c : start){
            if(c != '_'){
                order1 += c;
                if(c == 'L') lCount1++;
                else rCount1++;
            }
        }
        for(auto c : target){
            if(c != '_'){
                order2 += c;
                if(c == 'L') lCount2++;
                else rCount2++;
            }
        }
        if(order1 != order2 || lCount1 != lCount2 || rCount1 != rCount2) return false;
        int i = 0;
        int j = 0;
        while(i < start.length()){
            while(i < start.length() && start[i] == '_') i++;
            while(j < target.length() && target[j] == '_') j++;
            if(start[i] == 'L'){
                if(i < j) return false;
            } else {
                if(i > j) return false;
            }
            i++;
            j++;
        }
        return true;
    }
};

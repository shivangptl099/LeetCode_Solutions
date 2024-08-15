class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int bill5 = 0, bill10 = 0, bill20 = 0, i = 0;
       while(i < bills.size()){
        if(bills[i] == 5) bill5++;
        else if(bills[i] == 10){
            bill10++;
            if(bill5 < 1) return false;
            bill5--;
        } else {
            bill20++;
            if(bill10 && bill5){
                bill10--;
                bill5--;
            } else if(bill5 >= 3) bill5 -= 3;
            else return false;
        }
        i++;
       }
        return true;
    }
};

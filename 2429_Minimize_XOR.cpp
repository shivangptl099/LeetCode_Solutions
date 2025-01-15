class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int set_bits = 0, n = num2;
        while(n){
            n = n & (n - 1);
            set_bits++;
        }
        int ans = 0;
        for(int i = 31; i >= 0 && set_bits; i--){
            if(num1 & (1 << i)){
                set_bits--;
                ans += (1 << i);
            }
        }
        for(int i = 0; i < 32 && set_bits; i++){
            if((num1 & (1 << i)) == 0){
                set_bits--;
                ans += (1 << i);
            }
        }
        return ans;
    }
};

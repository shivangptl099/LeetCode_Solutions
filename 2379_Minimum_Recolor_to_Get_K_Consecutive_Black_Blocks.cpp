class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int b = 0;
        for(int i = 0; i < k; i++){
            if(blocks[i] == 'B') b++;
        }
        if(b >= k) return 0;
        int ans = k - b;
        int s = 0, e = k;
        while(e < blocks.size()){
            if(blocks[s++] == 'B') b--;
            if(blocks[e++] == 'B') b++;
            if(b >= k) return 0;
            ans = min(ans, k - b);
        }
        return ans;
    }
};

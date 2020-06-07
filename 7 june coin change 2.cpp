class Solution {
public:
    int coinCnt(int amount, vector<int> coins, int l){
        int i, j, x, y; 
        vector<vector<int>> table(amount+1, vector<int> (l,0));
        for (i = 0; i < l; i++) 
            table[0][i] = 1;
        for(i=1;i<amount+1;i++){
            for(j=0;j<l;j++){
                x = (i-coins[j] >= 0) ? table[i - coins[j]][j] : 0;
                y = (j >= 1) ? table[i][j - 1] : 0;
                table[i][j] = x+y;
            }
        }
        return table[amount][l-1];
    }
    
    int change(int amount, vector<int>& coins) {
        if(amount==0)
            return 1;
        if(amount < 0)
            return 0;
        if(coins.size()==0)
            return 0;
        return coinCnt(amount, coins, coins.size());
    }
};

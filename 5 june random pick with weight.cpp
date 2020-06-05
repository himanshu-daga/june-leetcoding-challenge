class Solution {
public:
    vector<int> w_sum;
    
    Solution(vector<int>& w) {
        w_sum.push_back(w[0]);
        for(int i=1;i<w.size();i++)
            w_sum.push_back(w[i] + w_sum[i-1]);
    }
    
    int pickIndex() {
        int i = rand() % w_sum[w_sum.size()-1];
        int ans = upper_bound(w_sum.begin(),w_sum.end(),i) - w_sum.begin();
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */

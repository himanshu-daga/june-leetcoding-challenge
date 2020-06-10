class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        if(r==-1)
            return 0;
        if(r==0)
            return (nums[0]>=target)?0:1;
        
        int m;
        while(l<=r){
            m = l+(r-l)/2;
            if(nums[m]==target)
                return m;
            else if(nums[m]>target)
                r=m-1;
            else
                l=m+1;
        }
        return l;
    }
};

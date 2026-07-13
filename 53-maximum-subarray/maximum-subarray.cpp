class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxVal = INT_MIN ;
        int len = nums.size() ;
        for ( int i = 0 ; i <= (len-1) ;  i++){
            sum = max(sum + nums[i] , nums[i]);
            maxVal = max(sum, maxVal);
        }
        return maxVal;
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0 ; 
        int end = 1 ;

        while(end < nums.size()){
            if(nums[end] == nums[end-1]){
                end++;
            }else{
                start++;
                nums[start] = nums[end];
                end++;
            }
        }
    return {start + 1};
    }
};
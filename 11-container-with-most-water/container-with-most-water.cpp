class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int left_ptr = 0 ;
        int right_ptr = height.size()-1 ;
        while (left_ptr < right_ptr){
                int width = right_ptr - left_ptr ;
                int hight = min(height[left_ptr],height[right_ptr]);
                int area =  width * hight ;
                maxArea = max(maxArea,area) ;
                height[left_ptr] < height[right_ptr] ? left_ptr++ : right_ptr-- ;
                }
    return maxArea; 
    }
};
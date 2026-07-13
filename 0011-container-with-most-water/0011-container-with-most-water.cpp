class Solution {
public:
    int maxArea(vector<int>& height) {

        int left=0;
        int right=height.size()-1;
        int width,tall,area,maxarea=0;

        while(left<right)
        {

            width=right-left;
            tall=min(height[left],height[right]);
            area=width*tall;
            maxarea=max(area,maxarea);



            if(height[left]>height[right])
            {
                right--;
            }
            else
            {
                left++;
            }


        }
        return maxarea;
        
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,s=-1,e=-1;
        bool flag1=false,flag2=false;  
        while(i<nums.size())
        {
            if(nums.size()!=0 && nums[i]==target && !flag1)
            {
                s=i;
                flag1=true;
            }
            else if(!flag1)
            {
                s=-1;
            }
            if(nums.size()!=0 && nums[j-i]==target && !flag2)
            {
                e=j-i;
                flag2=true;
            }
            else if(!flag2)
            {
                e=-1;
            }
            i++;

        }
        return {s,e};
     }
};
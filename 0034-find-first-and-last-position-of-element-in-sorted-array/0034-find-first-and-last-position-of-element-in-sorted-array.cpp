class Solution {
public:

int lb(vector<int> nums1, int target1)
{
    int low=0,high=nums1.size()-1,mid,ans;

    while(low<=high)
    {
        mid=(low + high)/2;

        if(nums1[mid]==target1)
        {
            ans = mid;
            high = mid-1;
        }
        else if(nums1[mid]>target1)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(low>=0 && low<nums1.size() && nums1[low]==target1)
    {
    return low;
    }
    else
    {
        return -1;
    }

}

int ub(vector<int> nums2, int target2)
{
    int low=0,high=nums2.size()-1,mid,ans;

    while(low<=high)
    {
        mid=(low + high)/2;

        if(nums2[mid]==target2)
        {
            ans = mid;
            low=mid+1;
        }
        else if(nums2[mid]<target2)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(high>=0 && high<nums2.size() && nums2[high]==target2)
    {
        return high;
    }
    else
    {
        return -1;
    }
}
    vector<int> searchRange(vector<int>& nums, int target) { 
        if(nums.size()!=0)
        {
        int first=lb(nums,target);
        int last=ub(nums,target);
        return {first,last};
        }
        else
        {
            return {-1,-1};
        }
     }
};
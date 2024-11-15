class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end=nums.size()-1;
        if(nums[end]>nums[0]){
            return nums[0];

        }

        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return nums[start];
    }
};
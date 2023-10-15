class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(target<=nums[s] ){
                return s;
            }
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid] && nums[mid-1]<target){
                return mid;
            }
            else if(nums[mid]==target+1){
                return mid-1;
            }
            else if(nums[mid]==target-1){
                return mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return s;
    }
};
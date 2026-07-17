class Solution {
public:

    int firstposition(vector<int>& nums, int target){
        int n=nums.size();
        int st =0, end = n-1;
        int ans = -1;
        while(st <=end){
            int mid = st + (end-st)/2;

            if(nums[mid] == target){
                ans = mid;
                end = mid -1;
            }
            else if(nums[mid] < target){
                st = mid +1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
    int lastposition(vector<int>& nums, int target){
        int n=nums.size();
        int st =0, end = n-1;
        int ans = -1;
        while(st <=end){
            int mid = st + (end-st)/2;

            if(nums[mid] == target){
                ans = mid;
                st = mid+1;
            }
            else if(nums[mid] < target){
                st = mid +1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstposition(nums,target);
        int last = lastposition(nums,target);
        return {first,last};
    }
};
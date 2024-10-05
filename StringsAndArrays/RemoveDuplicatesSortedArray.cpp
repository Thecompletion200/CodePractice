class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int count = 0;
        for(int right = left; right < nums.size(); right++){
            // Detected a new number
            if(nums[left] != nums[right]){
                // Increase left and replace with right
                left++;
                nums[left] = nums[right];
                count++;
            }
        }
        return left+1;
    }
};
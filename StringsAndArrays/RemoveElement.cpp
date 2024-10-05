class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int left = 0;  // Pointer to iterate through the array

        // Iterate through the array
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != val) {
                // If the current element is not equal to val, move it to the "left" pointer    
                // position
                nums[left] = nums[right];
                left++;
            }
        }

        // The size of the new array (without the val elements) is "left"
        return left;
    }
};

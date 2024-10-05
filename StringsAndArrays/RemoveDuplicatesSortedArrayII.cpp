class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 3) {
            return nums.size();
        }

        int count = 1;  // Start from the second element
        int numCount = 1;  // Count occurrences of the current number

        // Loop from the second element
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                numCount++;  // Increment count if duplicate
            } else {
                numCount = 1;  // Reset count for a new number
            }

            // Only keep the number if its count is <= 2
            if (numCount <= 2) {
                nums[count++] = nums[i];
            }
        }

        // Resize the vector to contain only the valid elements
        nums.resize(count);
        return count;
    }
};

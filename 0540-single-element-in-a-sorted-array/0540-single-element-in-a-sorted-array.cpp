class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];

        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Make mid even
            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1]) {
                // Single element is on the right
                low = mid + 2;
            } else {
                // Single element is on the left (or at mid)
                high = mid;
            }
        }

        return nums[low];
    }
};
class Solution {
public:
    int computeSum(vector<int>& nums, int divisor) {
        int sum = 0;

        for (int num : nums) {
            sum += (num + divisor - 1) / divisor;   // ceil(num/divisor)
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (computeSum(nums, mid) <= threshold) {
                high = mid - 1;     // try smaller divisor
            } else {
                low = mid + 1;      // need larger divisor
            }
        }

        return low;
    }
};
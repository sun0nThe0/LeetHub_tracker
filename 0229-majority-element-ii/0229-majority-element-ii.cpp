class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            bool already = false;
            for (int x : ans) {
                if (x == nums[i]) {
                    already = true;
                    break;
                }
            }

            if (already) continue;

            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i])
                    count++;
            }

            if (count > n / 3)
                ans.push_back(nums[i]);
        }

        return ans;
    }
};
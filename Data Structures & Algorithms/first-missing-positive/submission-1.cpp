class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contains_1 = false;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                contains_1 = true;
            }
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = 1;
            }
        }
        if (!contains_1) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            int num = abs(nums[i]);
            int idx = num - 1;
            if (nums[idx] > 0) {
                nums[idx] *= -1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }
        return n + 1;
    }
};

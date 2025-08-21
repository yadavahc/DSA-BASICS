class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            // If we find a "drop" in sorted order
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            // More than 1 drop => cannot be sorted & rotated
            if (count > 1) return false;
        }
        return true;
    }
};
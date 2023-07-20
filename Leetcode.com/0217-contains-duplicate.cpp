class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < size(nums)-1; i++){
            for (int j = 0; j < size(nums);j++){
                if (nums[i] == nums[j] && i != j) return true;
            }
        }
        return false;
    }
};
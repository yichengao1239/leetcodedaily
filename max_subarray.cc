class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long max_num = 0;
        long long min_num = 1000000000;

        for(int i = 0; i < nums.size(); i++ ) {
            if(nums[i] > max_num) {
                max_num = nums[i];
            }
            if(nums[i] < min_num) {
                min_num = nums[i];
            }
        }
        return (max_num - min_num) * (long long) k;
        
    }
};
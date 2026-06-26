class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int output = 0;
        int n = nums.size();
        
        // i represents the START of our subarray
        for (int i = 0; i < n; i++) {
            int target_count = 0;
            
            // j represents the END of our subarray
            for (int j = i; j < n; j++) {
                
                // Update the running balance as we expand the subarray by 1 element
                if (nums[j] == target) {
                    target_count++;
                } else {
                    target_count--;
                }
                
                // If the balance is strictly greater than 0, target is the majority
                if (target_count > 0) {
                    output++;
                }
            }
        }
        return output;
    }
};
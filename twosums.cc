class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index1 = 0;
        int index2 = 1;
        bool terminate = false;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if ( nums[i] + nums[j] == target) {
                    index1 = i;
                    index2 = j;
                    terminate = true;
                    break;
                }
            }
            if (terminate) {
                break;
            }
        }
        vector<int> result = {index1, index2};
        return result;
    }
};
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> solution(nums.size());
        bool pivot_found = false;
        int pivot_num = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == pivot) {
                pivot_num++;
            }
        }
        int current_index = 0;
        for(int j = 0; j < nums.size(); j++) {
            if (nums[j] < pivot) {
                solution[current_index] = nums[j];
                current_index++;
            }
        }
        int solution_index = current_index;
        while(pivot_num > 0) {
            solution[solution_index] = pivot;
            pivot_num--;
            solution_index++;
        }
        for(int j = 0; j < nums.size();j++) {
            if (nums[j] != pivot && nums[j] > pivot) {
                solution[solution_index] = nums[j];
                solution_index++;
            }
        }
        return solution;
    }
};

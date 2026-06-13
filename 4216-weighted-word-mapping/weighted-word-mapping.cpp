class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result;

        for(int i = 0; i < words.size(); i++) {
            int weight_sum = 0;
            for(int j = 0; j < words[i].length(); j++) {
                weight_sum += weights[words[i][j] - 'a'];
                
            }
            result += 25 - weight_sum % 26 + 'a';

        }
        return result;
    }
};
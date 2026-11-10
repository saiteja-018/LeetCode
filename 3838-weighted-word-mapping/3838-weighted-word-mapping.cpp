class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        for (const string& word : words) {
            int sum = 0;
            for (char c : word) {
                sum += weights[c - 'a'];
            }
            res += 'z' - (sum % 26);
        }
        return res;
    }
};
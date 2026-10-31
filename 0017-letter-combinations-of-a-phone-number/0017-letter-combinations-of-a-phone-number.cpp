class Solution {
    const vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> res;
        string curr = "";
        backtrack(digits, 0, curr, res);
        return res;
    }
private:
    void backtrack(const string& digits, int idx, string& curr, vector<string>& res) {
        if (idx == digits.length()) {
            res.push_back(curr);
            return;
        }
        string letters = mapping[digits[idx] - '0'];
        for (char c : letters) {
            curr.push_back(c);
            backtrack(digits, idx + 1, curr, res);
            curr.pop_back();
        }
    }
};
class Solution {
public:
    void combSum(vector<int>& candidates, int index,  vector<int>& temp, vector<vector<int>>& res, int target) {

        if(target == 0) {
            res.push_back(temp);
            return;
        }

        if(target < 0 || index >= candidates.size())
            return;

        temp.push_back(candidates[index]);
        combSum(candidates, index + 1, temp, res,
                target - candidates[index]);
        temp.pop_back();


        int next = index + 1;
        while(next < candidates.size() &&
              candidates[next] == candidates[index])
            next++;

        combSum(candidates, next, temp, res, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> temp;

        combSum(candidates, 0, temp, res, target);

        return res;
    }
};
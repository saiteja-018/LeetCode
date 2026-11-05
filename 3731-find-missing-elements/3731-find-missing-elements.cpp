class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = nums[0], maxi = nums[0];
        for (int x : nums) {
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> result;
        
        for (int i = mini; i <= maxi; i++) {
            if (s.find(i) == s.end()) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
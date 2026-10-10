class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count[101] = {0}; 
        int goodPairs = 0;

        for (int x : nums) {
            goodPairs += count[x];
            count[x]++;
        }

        return goodPairs;
    }
};
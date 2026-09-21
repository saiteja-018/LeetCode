class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        vector<int> ans(n);
        for(int num:nums) total+=num;
        
        int leftSum=0;
        int rightSum=0;

        for(int i=0;i<n;i++){
            rightSum=total-leftSum-nums[i];
            ans[i]=abs(rightSum-leftSum);
            leftSum+=nums[i];
        }
    return ans;

    }
};
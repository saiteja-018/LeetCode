class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++){
            int j=target-nums[i];
            if(mpp.find(j)!=mpp.end()){
                return {mpp[j],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};
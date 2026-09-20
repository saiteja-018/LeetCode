class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int prefixSum=0;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
        }
        int prefix=0;
        int total=prefixSum;
        for(int i=0;i<n;i++){
            total-=nums[i];
            if(total==prefix)
                return i;
            prefix+=nums[i];
        }
        return -1;

    }
};
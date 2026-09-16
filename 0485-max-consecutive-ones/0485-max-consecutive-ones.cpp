class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxCount=INT_MIN;
        for(int num:nums){
            if(num==1) count++;
            else count=0;
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};
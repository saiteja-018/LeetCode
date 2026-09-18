class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int first=0;
        int middle=0;
        int last=n-1;
        while(middle<=last){
            if(nums[middle]==1) middle++;
            else if(nums[middle]==0){
                swap(nums[first],nums[middle]);
                first++;
                middle++;
            }
            else{ 
                swap(nums[middle],nums[last]);
                last--;
            }
        }
    }
};
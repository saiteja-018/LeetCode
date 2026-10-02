class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest_sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left< right){
                int cur_sum=nums[i]+nums[left]+nums[right];

                if(abs(cur_sum-target)<abs(closest_sum-target)){
                    closest_sum=cur_sum;
                }
                if(cur_sum< target){
                    left++;
                }
                else if(cur_sum> target){
                    right--;
                }
                else{
                    return target;
                }
            }
        }
        return closest_sum;
    }
};
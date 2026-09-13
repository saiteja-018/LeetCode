class Solution {
public:
    bool isValid(vector<int>& piles,int h,int k){
        long long count=0;
        for(int i=0;i<piles.size();i++){
            count+=((long long)piles[i]+k-1)/k;
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isValid(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
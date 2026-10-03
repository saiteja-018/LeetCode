class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> seen(26,0);
        int n=s.size();
        int maxLen=0;
        int left=0;
        int maxCount=0;
        for(int i=0;i<n;i++){
            seen[s[i]-'A']++;
            maxCount=max(maxCount,seen[s[i]-'A']);

            while((i-left+1)-maxCount > k){
                seen[s[left]-'A']--;
                left++;
            }
            maxLen=max(maxLen,i-left+1);
            
        }
        return maxLen;
    }
};
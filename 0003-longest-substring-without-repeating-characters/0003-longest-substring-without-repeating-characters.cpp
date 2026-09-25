class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> seen;
        int n=s.size(); 
        int maxLen=0;
        int j=0;
        for(int i=0;i<n;i++){
            while(seen.count(s[i])){
                seen.erase(s[j]);
                j++;
            }
            seen.insert(s[i]);
            maxLen=max(maxLen,i-j+1);
        }
        return maxLen;
    }
};
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> need(26,0), have(26,0);
        int k=s1.size();
        for(char ch:s1) need[ch-'a']++;
        int left=0;
        for(int right=0;right<s2.size();right++){
            have[s2[right]-'a']++;

            if(right-left+1>k){
                have[s2[left]-'a']--;
                left++;
            }

            if(right-left+1==k  && have==need){
                return true;
            }
        }
        return false;
    }
};
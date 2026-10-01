class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int, int> cnt;
        int l = 0, best = 0;
        for (int r = 0; r < (int)f.size(); r++) {
        cnt[f[r]]++;
        while (cnt.size() > 2) {
        if (--cnt[f[l]] == 0) cnt.erase(f[l]);
        l++;
        }
        best = max(best, r - l + 1);
        }
        return best;
    }
};
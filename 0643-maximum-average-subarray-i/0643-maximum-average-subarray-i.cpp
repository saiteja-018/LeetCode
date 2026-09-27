class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        long long sum = 0;
        for (int i = 0; i < k; i++) sum += a[i];
        long long best = sum;
        for (int r = k; r < (int)a.size(); r++) {
        sum += a[r] - a[r - k];
        best = max(best, sum);
        }
        return (double)best/ k;
    }
};
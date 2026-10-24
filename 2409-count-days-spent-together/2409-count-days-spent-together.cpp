class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int pref[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        auto toDay = [&](string s) {
            return pref[stoi(s.substr(0, 2)) - 1] + stoi(s.substr(3, 2));
        };

        string start = max(arriveAlice, arriveBob), end = min(leaveAlice, leaveBob);
        return start > end ? 0 : toDay(end) - toDay(start) + 1;
    }
};
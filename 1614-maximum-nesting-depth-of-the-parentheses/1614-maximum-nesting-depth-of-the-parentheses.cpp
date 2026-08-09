class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int maxDepth = 0;

        for (char ch : s) {
            if (ch == '(') {
                cnt++;
                maxDepth = max(maxDepth, cnt);
            }
            else if (ch == ')') {
                cnt--;
            }
        }

        return maxDepth;
    }
};
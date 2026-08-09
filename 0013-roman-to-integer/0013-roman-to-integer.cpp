class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        char nextstep = '\0';
        int n = s.length();

        for (int i = 0; i < n; i++) {

            if (i != n - 1)
                nextstep = s[i + 1];

            if (s[i] == 'I' && (nextstep == 'V' || nextstep == 'X'))
                ans -= 1;

            else if (s[i] == 'X' && (nextstep == 'L' || nextstep == 'C'))
                ans -= 10;

            else if (s[i] == 'C' && (nextstep == 'D' || nextstep == 'M'))
                ans -= 100;

            else if (s[i] == 'I')
                ans += 1;

            else if (s[i] == 'V')
                ans += 5;

            else if (s[i] == 'X')
                ans += 10;

            else if (s[i] == 'L')
                ans += 50;

            else if (s[i] == 'C')
                ans += 100;

            else if (s[i] == 'D')
                ans += 500;

            else if (s[i] == 'M')
                ans += 1000;
        }

        return ans;
    }
};
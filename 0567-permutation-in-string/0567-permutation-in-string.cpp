class Solution {
public:
    bool isfreqsame(vector<int>& freq, vector<int>& windfreq) {
        for(int i = 0; i < 26; i++) {
            if(freq[i] != windfreq[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if(n > m) return false;

        vector<int> freq(26, 0);
        vector<int> windfreq(26, 0);

        // frequency of s1
        for(int i = 0; i < n; i++) {
            freq[s1[i] - 'a']++;
            windfreq[s2[i] - 'a']++;
        }

        // first window
        if(isfreqsame(freq, windfreq)) {
            return true;
        }

        // sliding window
        for(int i = n; i < m; i++) {
            windfreq[s2[i] - 'a']++;

            // remove old character
            windfreq[s2[i - n] - 'a']--;

            if(isfreqsame(freq, windfreq)) {
                return true;
            }
        }

        return false;
    }
};
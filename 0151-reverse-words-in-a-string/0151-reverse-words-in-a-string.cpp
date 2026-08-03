class Solution {
public:
    string reverseWords(string s) {
        string chunk = "";
        string ans = "";

        for (char ch : s) {
            if (ch != ' ') {
                chunk += ch;
            } else {
                if (!chunk.empty()) {
                    if (ans.empty())
                        ans = chunk;
                    else
                        ans = chunk + " " + ans;

                    chunk = "";
                }
            }
        }

        if (!chunk.empty()) {
            if (ans.empty())
                ans = chunk;
            else
                ans = chunk + " " + ans;
        }

        return ans;
    }
};
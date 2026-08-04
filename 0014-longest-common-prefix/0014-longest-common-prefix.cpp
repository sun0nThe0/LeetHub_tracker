class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty())
            return "";

        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();

        string result = "";

        for (int i = 0; i < first.length(); i++) {

            if (i >= last.length() || first[i] != last[i])
                break;

            result += first[i];
        }

        return result;
    }
};
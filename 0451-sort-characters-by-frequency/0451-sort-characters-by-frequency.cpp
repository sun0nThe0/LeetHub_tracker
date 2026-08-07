class Solution {
public:
    string frequencySort(string s) {

        map<char, int> mp;

        // Count frequency of each character
        for (char ch : s) {
            mp[ch]++;
        }

        // Store {frequency, character}
        vector<pair<int, char>> v;

        for (auto x : mp) {
            v.push_back({x.second, x.first});
        }

        // Sort by frequency in descending order
        sort(v.rbegin(), v.rend());

        string ans = "";

        // Build the answer
        for (auto x : v) {
            for (int i = 0; i < x.first; i++) {
                ans.push_back(x.second);
            }
        }

        return ans;
    }
};
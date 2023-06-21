class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        auto f = [&](string s) -> int {
            sort(s.begin(), s.end());
            int res = 1;
            for (int i = 1; i < s.size(); ++i) {
                if (s[i] != s[i - 1]) {
                    break;
                }
                ++res;
            }
            return res;
        };

        function<int(string&)> fx = [&](string& s) -> int {
            int arr[26]{};
            for (auto& c : s) arr[c - 'a']++;
            for (auto& i : arr) if (i) return i;
            return 0;
        };
    }

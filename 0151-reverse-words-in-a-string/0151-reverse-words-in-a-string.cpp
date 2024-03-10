#include <string>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::string ans = "";
        std::string word = "";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    if (!ans.empty()) {
                        ans = word + " " + ans;
                    } else {
                        ans = word;
                    }
                    word = "";
                }
            }
        }
        // Add the last word (if any) to the beginning of the result
        if (!word.empty()) {
            if (!ans.empty()) {
                ans = word + " " + ans;
            } else {
                ans = word;
            }
        }
        return ans;
    }
};

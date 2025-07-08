class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            char current = s[right];

            if (charIndex.count(current) && charIndex[current] >= left) {
                left = charIndex[current] + 1;
            }

            charIndex[current] = right;
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        unordered_set<int> seen;

        for (auto& entry : freq) {
            if (seen.count(entry.second)) {
                return false;
            }
            seen.insert(entry.second);
        }

        return true;
    }
};
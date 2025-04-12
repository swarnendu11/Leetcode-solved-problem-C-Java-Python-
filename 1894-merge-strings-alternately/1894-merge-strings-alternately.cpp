class Solution {
public:
    string mergeAlternately(const string& word1, const string& word2) {
        string result;
        int i = 0, j = 0;
        int n = word1.size(), m = word2.size();

        while (i < n || j < m) {
            if (i < n)
                result += word1[i++];
            if (j < m)
                result += word2[j++];
        }

        return result;
    }

    int main() {
        string word1, word2;

        cout << "Enter word1: ";
        cin >> word1;

        cout << "Enter word2: ";
        cin >> word2;

        string merged = mergeAlternately(word1, word2);
        cout << "Merged String: " << merged << endl;

        return 0;
    }
};   
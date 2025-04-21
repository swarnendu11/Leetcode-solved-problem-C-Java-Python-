class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        istringstream iss(s);

        while (iss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

       
        return join(words, " ");
    }

private:
    string join(vector<string>& words, string delimiter) {
        string result;
        for (int i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i < words.size() - 1) result += delimiter;
        }
        return result;
    }
};

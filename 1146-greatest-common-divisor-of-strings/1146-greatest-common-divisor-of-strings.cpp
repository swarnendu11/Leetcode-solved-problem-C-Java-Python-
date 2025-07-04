class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1) return "";

         int gcdLength = gcd(str1.length(), str2.length()); 
         return str1.substr(0, gcdLength);
    }

private:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
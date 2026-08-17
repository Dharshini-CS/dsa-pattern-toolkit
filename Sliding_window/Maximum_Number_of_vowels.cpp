class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int l = 0, r = 0;
        int n = s.length(), maxCount = 0, count = 0;

        // expand first window
        while (r < k) {
            if (isVowel(s[r]))
                count++;
            r++;
        }
        maxCount = count;

        // slide window
        while (r < n) {
            if (isVowel(s[r]))
                count++; // add new char
            if (isVowel(s[l]))
                count--;                     // remove old char
            maxCount = max(maxCount, count); // update max
            l++;
            r++;
        }

        return maxCount;
    }
};
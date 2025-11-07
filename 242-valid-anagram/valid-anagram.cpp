class Solution {
public:
    // Time Complexity O(n). Space Complexity O(1). 
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> sHashCount;
        unordered_map<char, int> tHashCount;

        for (int i = 0; i < s.length(); ++i) {
            if (sHashCount.find(s[i]) == sHashCount.end()) sHashCount[s[i]] = 0;
            else sHashCount[s[i]] = sHashCount[s[i]] + 1;

            if (tHashCount.find(t[i]) == tHashCount.end()) tHashCount[t[i]] = 0;
            else tHashCount[t[i]] = tHashCount[t[i]] + 1;
        }

        return sHashCount == tHashCount; // Hash maps are equal if have same key-value pairs, despite the order.

    }
};

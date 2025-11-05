class Solution {
public:
    // Time Complexity O(n) [n = s.length() = t.length()]. 
    // Space Complexity O(1) [Any valid ASCII character, which is a finite amount of elements].
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> maps;
        unordered_map<char, char> mapt;

        for (int i = 0; i < s.length(); ++i) {
            if (maps.count(s[i])!=0 && maps[s[i]]!=t[i]) return false;
            if (mapt.count(t[i])!=0 && mapt[t[i]]!=s[i]) return false;
            maps[s[i]] = t[i];
            mapt[t[i]] = s[i];
        }

        return true;

    }
};

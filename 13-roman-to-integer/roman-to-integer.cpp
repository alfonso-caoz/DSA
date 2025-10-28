class Solution {
public:
    int romanToInt(string s) {

        // Hash table
        unordered_map<char, int> hash_table = { {'I', 1}, 
                                                {'V', 5}, 
                                                {'X', 10}, 
                                                {'L', 50}, 
                                                {'C', 100}, 
                                                {'D', 500}, 
                                                {'M', 1000} };

        int result = 0; // Result stays as cero in case of an invalid entry

        // Time complexity O(n)
        for (int i = 0; i < s.length(); ++i) {
            if ((i + 1) != s.length()) {
                // Sum two consecutive values and add it to result: Greater than or Equal to the next one 
                if (hash_table[s.at(i)] >= hash_table[s.at(i + 1)]) {
                    result += hash_table[s.at(i)];
                } else {
                // |Substract two consecutive values| and add it to result: Less than the next one 
                    result += (hash_table[s.at(i + 1)] - hash_table[s.at(i)]);
                    i += 1; // Considering in the result the (i+1) element already
                }
            } else 
                result += hash_table[s.at(i)]; // Last string element
        }

        return result;

    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }

        sort(s.begin(), s.end());  // n log n      
        sort(t.begin(), t.end()); // n log n

        //Final solution = 2(n(log(n)))
        return s == t;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;

        for (char ch = 'a'; ch <= 'z'; ch++) {

            int freq1 = 0, freq2 = 0;

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == ch)
                    freq1++;
                if (t[i] == ch)
                    freq2++;
            }

            if (freq1 != freq2)
                return false;
        }

        return true;
    }
};
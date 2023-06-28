class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u' || c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s)
    {

        string vowels = "";

        for (char c : s)
            if (isVowel(c))
                vowels += c;

        reverse(vowels.begin(), vowels.end());

        int pos = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
            {
                s[i] = vowels[pos];
                pos++;
            }
        }

        return s;
    }
};
class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        reverse(s.begin(), s.end());

        int strLen = s.size(), ans = 0;

        for (int i = 0; i < strLen; i++)
        {
            if (ans != 0 && s[i] == ' ')
            {
                return ans;
            }
            if (s[i] != ' ')
            {
                ans++;
            }
        }
        return ans;
    }
};
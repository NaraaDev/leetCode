class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";

        int word1Size = word1.size(), word2Size = word2.size();
        int l = 0, l1 = 0;

        while (l < word1Size || l1 < word2Size)
        {
            if (l == word1Size || l1 == word2Size)
                ans += (l1 == word2Size ? word1[l++] : word2[l1++]);
            else
                ans += l > l1 ? word2[l1++] : word1[l++];
        }

        return ans;
    }
};
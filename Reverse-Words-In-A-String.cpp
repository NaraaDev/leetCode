class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> v;

        bool isSpace = false;

        string word = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                isSpace = false;
                word += s[i];
            }
            else
            {
                if (!isSpace && word != "")
                {
                    isSpace = true;
                    v.push_back(word);
                    word = "";
                }
            }
        }
        if (word != "")
            v.push_back(word);

        string ans = "";

        for (int i = 0; i < v.size() / 2; i++)
        {
            swap(v[i], v[v.size() - 1 - i]);
        }

        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i] + (i == v.size() - 1 ? "" : " ");
        }

        return ans;
    }
};
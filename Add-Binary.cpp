class Solution
{
public:
    void equalString(string &a, string &b)
    {

        int maxSize = max(a.size(), b.size());
        int minSize = min(a.size(), b.size());

        for (int i = minSize; i < maxSize; i++)
        {
            if (a.size() > b.size())
                b.insert(0, "0");
            else
                a.insert(0, "0");
        }
    }

    string addBinary(string a, string b)
    {
        string ans = "";

        equalString(a, b);
        int size = a.size();

        bool nextPlusOne = false;

        for (int i = size - 1; i >= 0; i--)
        {
            if (a[i] == '1' && b[i] == '1')
            {
                ans += nextPlusOne ? "1" : "0";
                nextPlusOne = true;
            }
            else if (nextPlusOne && (a[i] == '1' || b[i] == '1'))
            {
                ans += '0';
                nextPlusOne = true;
            }
            else
            {
                ans += (a[i] == '1' || b[i] == '1' || nextPlusOne) ? '1' : '0';
                nextPlusOne = false;
            }
        }
        if (nextPlusOne)
            ans += "1";
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
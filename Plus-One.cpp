class Solution
{
public:
    void stringToVector(vector<int> &ans, string digits)
    {

        for (char c : digits)
        {
            ans.push_back(c - '0');
        }
    }
    vector<int> plusOne(vector<int> &digits)
    {

        string digitsOfChar = "";

        for (int digit : digits)
        {
            digitsOfChar += to_string(digit);
        }

        vector<int> ans;

        int size = digitsOfChar.size();

        bool checkNine = true;
        for (int i = size - 1; i >= 0; i--)
        {
            if (digitsOfChar[i] != '9')
            {
                digitsOfChar[i] += 1;
                checkNine = false;
                break;
            }
            else
                digitsOfChar[i] = '0';
        }

        if (checkNine)
            digitsOfChar.insert(0, "1");

        stringToVector(ans, digitsOfChar);

        return ans;
    }
};
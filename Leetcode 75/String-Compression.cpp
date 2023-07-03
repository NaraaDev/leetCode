class Solution
{
public:
    void numberToCharArray(int num, vector<char> &c)
    {
        string s = to_string(num);

        for (int i = 0; i < s.size(); i++)
        {
            c.push_back(s[i]);
        }
    }

    int compress(vector<char> &chars)
    {
        vector<char> v, ans;
        vector<int> number;

        int i = 0, j = 0, size = chars.size(), cnt = 0;

        while (i < size)
        {
            if (chars[i] == chars[j] && j + 1 < size)
            {
                cnt++;
                j++;
            }
            else if (j + 1 == size)
            {
                if (chars[j] != chars[i])
                {
                    v.push_back(chars[i]);
                    number.push_back(cnt);
                    v.push_back(chars[j]);
                    number.push_back(1);
                }
                else
                {
                    v.push_back(chars[i]);
                    number.push_back(cnt + 1);
                    cnt = 0;
                }
                break;
            }
            else
            {
                v.push_back(chars[i]);
                number.push_back(cnt);
                i = j;
                cnt = 0;
            }
        }

        for (int g = 0; g < number.size(); g++)
        {
            ans.push_back(v[g]);
            if (number[g] != 1)
                numberToCharArray(number[g], ans);
        }
        chars = ans;
        return chars.size();
    }
};

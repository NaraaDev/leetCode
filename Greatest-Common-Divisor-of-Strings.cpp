class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {

        int str1Size = str1.size(), str2Size = str2.size();

        int gcd = __gcd(str1Size, str2Size);

        int div1 = str1Size / gcd;
        int div2 = str2Size / gcd;

        bool can = true;

        for (int i = 0; i < gcd; i++)
        {
            if (str1[i] != str2[i])
            {
                can = false;
                break;
            }
        }

        for (int i = 0; i < gcd; i++)
        {
            for (int j = 0; j < div1; j++)
            {
                if (str1[i] != str1[gcd * j + i])
                {
                    can = false;
                    break;
                }
            }
        }

        for (int i = 0; i < gcd; i++)
        {
            for (int j = 0; j < div2; j++)
            {
                if (str2[i] != str2[gcd * j + i])
                {
                    can = false;
                    break;
                }
            }
        }

        return (can ? str1.substr(0, gcd) : "");
    }
};
/*
    class Solution {
    public:
    string gcdOfStrings(string str1, string str2) {

        if(str1 + str2 != str2 + str1) {
            return "";
        }

        int gcd = __gcd(str1.size(), str2.size());

        return str1.substr(0, gcd);
    }
};
*/
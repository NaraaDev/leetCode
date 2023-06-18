class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int haystackLen = haystack.size();
        int needleLen = needle.size();

        if (needleLen > haystackLen)
            return -1;

        int position = 0;

        for (int i = 0; i < haystackLen; i++)
        {
            if (needle[position] == haystack[i])
            {
                int j = i;
                while (position < needleLen && j < haystackLen)
                {
                    if (needle[position] != haystack[j])
                    {
                        position = 0;
                        break;
                    }
                    else
                    {
                        j++;
                        position++;
                    }
                }
                if (position == needleLen)
                {
                    return i;
                }
            }
        }

        return -1;
    }
};
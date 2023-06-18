class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int arraySize = 0;

        map<int, bool> m;

        for (int num : nums)
        {
            if (!m[num])
            {
                m[num] = true;
                nums[arraySize] = num;
                arraySize++;
            }
        }
        return arraySize;
    }
};
class Solution
{
public:
    void fillZero(vector<int> &ans, int size)
    {
        for (int i = 0; i < size; i++)
            ans.push_back(0);
    }

    vector<int> productExceptSelf(vector<int> &nums)
    {
        long long int multi = 1;

        int cntOfZero = 0, size = nums.size();

        for (int i : nums)
            cntOfZero += i == 0;

        vector<int> ans;

        if (cntOfZero >= 2)
            fillZero(ans, size);

        else if (cntOfZero == 1)
        {

            for (int i : nums)
                multi *= i == 0 ? 1 : i;

            for (int i : nums)
                ans.push_back(i == 0 ? multi : 0);
        }
        else
        {
            for (int i : nums)
                multi *= i;

            for (int i : nums)
                ans.push_back(multi / i);
        }

        return ans;
    }
};
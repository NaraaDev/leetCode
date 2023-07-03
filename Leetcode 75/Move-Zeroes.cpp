class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int left = 0, right = 1;
        int arrSize = nums.size();

        while (right < arrSize)
        {
            if (nums[left] == 0 && nums[right] == 0)
                right++;
            else if (nums[left] == 0)
            {
                nums[left] = nums[right];
                nums[right] = 0;
                right++;
                left++;
            }
            else
            {
                left++;
                right = left + 1;
            }
        }
    }
};
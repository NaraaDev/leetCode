class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {

        int right = 0, left = INT_MAX, mid = INT_MAX;

        for (right; right < nums.size(); right++)
        {
            if (nums[right] > mid)
                return true;
            else if (nums[right] < mid && nums[right] > left)
                mid = nums[right];
            else if (nums[right] < left)
                left = nums[right];
        }

        return false;
    }
};
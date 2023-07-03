class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        int l = 0, r = height.size() - 1;

        int ans = 0;

        while (l < r)
        {
            ans = max((r - l - 1) * min(height[l], height[r]) + min(height[l], height[r]), ans);

            if (height[l] > height[r])
                r--;
            else
                l++;
        }

        return ans;
    }
}
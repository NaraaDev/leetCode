class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> v;

        for (int num : nums1)
        {
            v.push_back(num);
        }

        int pos = 0, i = 0, j = 0;

        while (i < m || j < n)
        {
            if (i == m)
            {
                nums1[pos] = nums2[j];
                j++;
                pos++;
            }
            else if (j == n)
            {
                nums1[pos] = v[i];
                i++;
                pos++;
            }
            else
            {
                if (v[i] > nums2[j])
                {
                    nums1[pos] = nums2[j];
                    j++;
                    pos++;
                }
                else
                {
                    nums1[pos] = v[i];
                    i++;
                    pos++;
                }
            }
        }
    }
};
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {

        int size = flowerbed.size();
        int cnt = 0;
        if (size == 1)
        {
            return (flowerbed[0] == 0 ? 1 : 0) >= n;
        }
        for (int i = 0; i < size; i++)
        {
            if (i == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                cnt++;
                flowerbed[i] = 1;
            }
            else if (size - 1 == i && flowerbed[i] == 0 && flowerbed[i - 1] == 0)
            {
                cnt++;
                flowerbed[i] = 1;
            }
            else
            {
                if (i + 1 < size && flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0)
                {
                    cnt++;
                    flowerbed[i] = 1;
                }
            }
        }
        return cnt >= n;
    }
};
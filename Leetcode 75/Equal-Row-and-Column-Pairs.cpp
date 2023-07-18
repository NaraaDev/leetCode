class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int ans = 0, size = grid.size();

        for(int i = 0; i < size; i++) {
            map<int,int> m;
            for(int j = 0; j < size; j++) {
                m[j] = grid[i][j];
            }
            for(int g = 0; g< size; g++) {
                bool isEqual = true;
                for(int j = 0; j < size; j++) {
                    if(m[j] != grid[j][g]) {
                        isEqual = false;
                        break;
                    }
                }
                ans += isEqual;
            }
        }

        return ans;

    }
};

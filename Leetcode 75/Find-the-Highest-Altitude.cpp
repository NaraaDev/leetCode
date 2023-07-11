class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int size = gain.size(), ans = 0, altitude = 0;

        for(int i = 0; i < size; i++) {
            altitude += gain[i];
            ans = max(ans, altitude);
        }

        return ans;

    }
};
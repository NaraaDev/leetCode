class-Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int size = nums.size(), ans = 0, cnt = 0, preZeroPosition = -1;

        for(int i = 0; i < size; i++) {

            if(nums[i] == 0) {
                if(preZeroPosition == -1) 
                    preZeroPosition = i;
                else {
                    cnt = i - preZeroPosition - 1;
                    preZeroPosition = i;
                }
            } 
            else 
                cnt++;
            ans = max(ans, cnt);
        }
        return (ans == size ? size - 1 : ans);
    }
};
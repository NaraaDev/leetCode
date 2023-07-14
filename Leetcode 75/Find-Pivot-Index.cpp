class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int size = nums.size();

        int prefixSum[size];
        
        prefixSum[0] = nums[0];

        for(int i = 1; i < size; i++)
            prefixSum[i] = prefixSum[i - 1] + nums[i];


        for(int i = 0; i < size; i++) {
            if(prefixSum[i] - nums[i] == prefixSum[size - 1] - prefixSum[i])
                return i;
            
        }

        return -1;

    }
};
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans = {{}, {}};

        map<int,int> m;

        for(int i: nums1) 
            m[i] = 1;

        for(int i: nums2) {
            if(m[i] == 1 || m[i] == -1)
                m[i] = -1;
            else
                m[i] = 2;
        }

        map<int,int> ::iterator it;
        
        for(it = m.begin(); it != m.end(); it++) 
            if(it->second == 1 || it->second == 2) 
                ans[it->second - 1].push_back(it->first);

        return ans;
    }
};

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        map<int, int > m,cnt;

        for(int i: arr)
            m[i]++;
        
        map<int,int> ::iterator it;

        for(it = m.begin(); it != m.end(); it++) {
            cnt[it->second]++;
            if(cnt[it->second] > 1) return false;
        }

        return true;

    }
};

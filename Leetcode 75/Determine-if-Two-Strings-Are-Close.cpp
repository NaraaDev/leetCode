class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.length() != word2.length())
            return false;
        
        map<char, int> word1Cnt, word2Cnt;
        map<int, int> m;
        set<char> s;

        for(char c: word1) {
            word1Cnt[c]++;
            s.insert(c);
        }
        
        int size = s.size();

        for(char c: word2) {
            word2Cnt[c]++;
            s.insert(c);
            if(s.size() != size)
                return false;
        }

        map<char,int> ::iterator it;
        map<int, int> ::iterator checkRemainder; 

        for(it = word1Cnt.begin(); it != word1Cnt.end(); it++) 
            m[it->second]++;

        for(it = word2Cnt.begin(); it != word2Cnt.end(); it++) 
            m[it->second]--;
        
        for(checkRemainder = m.begin(); checkRemainder != m.end(); checkRemainder++)
            if(checkRemainder->second != 0)
                return false;

        return true;

    }
};

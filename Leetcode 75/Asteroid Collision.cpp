class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> ans;
        stack<int> s;

        bool isRight = false;

        s.push(asteroids[0]);
        isRight = asteroids[0] > 0;

        for(int i = 1; i < asteroids.size(); i++) {
            if(isRight && asteroids[i] < 0) {
                isRight = false;
                while(!s.empty() && s.top() > 0) {
                    if(s.top() >= abs(asteroids[i])) {
                        if(s.top() > abs(asteroids[i])) {
                            isRight = true;
                            break;
                        }
                        else {
                            isRight = true;
                            s.pop();
                            break;
                        }
                    } else 
                        s.pop();
                }
                if(!isRight) {
                    s.push(asteroids[i]);
                }
            } else {
                s.push(asteroids[i]);
                isRight = asteroids[i] > 0;
            }
        }

        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;

    }
};
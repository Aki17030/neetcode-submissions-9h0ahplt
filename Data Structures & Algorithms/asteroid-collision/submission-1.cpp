class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for (int rock : asteroids) {

            if (s.empty() || rock > 0) {
                s.push(rock);
            } else {

                bool destroyed = false;
                while (!s.empty() && s.top() > 0) {
                    if (abs(s.top()) < abs(rock)) {

                        s.pop();
                        continue;
                    } else if (abs(s.top()) == abs(rock)) {
                   
                        s.pop();
                        destroyed = true;
                        break;
                    } else {
                        
                        destroyed = true;
                        break;
                    }
                }
                if (!destroyed) {
                    s.push(rock);
                }
            }
        }

        
        vector<int> output(s.size());
        for (int i = s.size() - 1; i >= 0; --i) {
            output[i] = s.top();
            s.pop();
        }
        return output;
    }
};


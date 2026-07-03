class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> ast;

        for (int i = 0; i < asteroids.size(); i++) {

            if (asteroids[i] > 0) {
                ast.push_back(asteroids[i]);
            }
            else {

                while (!ast.empty() &&
                       ast.back() > 0 &&
                       ast.back() < abs(asteroids[i])) {
                    ast.pop_back();
                }

                if (!ast.empty() &&
                    ast.back() == abs(asteroids[i])) {
                    ast.pop_back();
                }
                else if (ast.empty() || ast.back() < 0) {
                    ast.push_back(asteroids[i]);
                }
            }
        }

        return ast;
    }
};
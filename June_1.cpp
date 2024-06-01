class Solution {
public:
    int scoreOfString(string s) {
        int len = s.length();
        int score = 0;

        for(int i = 0; i < len - 1; i++) {
            score += abs(s[i+1] - s[i]);
        }

        return score;
    }
};

class Solution {
public:
    int longestPalindrome(string s) {
        int oddCount = 0;
        unordered_map<char , int> charFrequency;
        for(char ch : s){
            charFrequency[ch]++;
            if(charFrequency[ch] % 2 == 1)
                oddCount++;
            else
                oddCount--;
            
        }
        if(oddCount > 1)
            return s.length() - oddCount + 1;
        return s.length();
    }
};

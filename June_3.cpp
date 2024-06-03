class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int a = 0;
        int b = 0;

        while(a < s.size() && b < t.size()){
            if(s[a] == t[b]){
                b++;
            }
            a++;
        }

        return t.size() - b; 
    }
};

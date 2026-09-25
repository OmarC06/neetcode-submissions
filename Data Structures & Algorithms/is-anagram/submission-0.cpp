class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            int letterCounts[26] = {}; //initializes an array that holds the counts of every letter.

            for(int i = 0; i < s.size(); ++i){
                ++letterCounts[s[i] - 'a']; //s[i] - 'a' takes the distance from a to know what index of the alphabet to increment to.
                --letterCounts[t[i] - 'a']; //this goes to the same letter and decrements it
            }

            for(int j = 0; j < 26; ++j){
                if(letterCounts[j] > 0){
                    return false;
                }
            }
            return true;

        } else {return false;}
    }
};




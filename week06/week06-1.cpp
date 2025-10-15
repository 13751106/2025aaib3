/// week06-1.cpp
/// LeetCode ¾Ç²ß­pµe 242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length() ) return false;
        int R[26] = {};
        for(int i=0; i<s.length(); i++) {
            char c = s[i] - 'a';
            R[c]++;
        }
        for(int i=0; i<t.length(); i++ ){
            char c = t[i] - 'a';
            R[c]--;
            if(R[c]<0) return false;
        }
        return true;
    }
};

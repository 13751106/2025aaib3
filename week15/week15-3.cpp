/// week15-3.cpp
/// LeetCode ¾Ç²ß­pµe 459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        string s3 = s2.substr(1,s2.length()-2);
        return s3.find(s) != string::npos;
    }
};

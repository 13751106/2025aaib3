/// week05-1.cpp
/// LeetCode �ǲ߭p�e58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// ��r�� string �� iostream �� cin �ӥ�
        string word; /// �r��
        /// ss >> word;
        while( ss >> word ){
            /// �̭����򳣨S��
        }
        cout << word;

        return word.length() ;
    }
};

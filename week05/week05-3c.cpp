/// week05-3c.cpp
/// CPE �o������2�D UVA 483 Word Scramble ��r�ˤ�
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line; /// Part 1: Input
    while( getline(cin, line) ){ /// Ū�J1��
        stringstream ss(line); /// Part 3: ��r��ΨӬq�r
        string word; /// �Ψ��_�r
        ss >> word;
        reverse( word.begin(), word.end() );
        cout << word;
        while( ss >> word ){ /// Part 3: ��r��ΨӬq�r
            reverse( word.begin(), word.end() ); /// Part 4: �ϹL��
            cout << " " << word;
        }
        cout << endl; /// ����
        /// Part 2: Output
        /// cout << line << endl; /// ���H�K�L�X��
    }
}

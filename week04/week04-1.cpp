/// week04-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>a;
    cout << "�S����l��a�����׬O" << a.size() << endl;
    a.push_back(99);
    cout << "�g�L.push_back()��a��������" << a.size() << endl;

    vector<int>b(3);
    cout << "b�����׬O" << b.size() << endl;
    a.push_back(99);
    for(int i=0; i<b.size(); i++) cout << b[1] << ' ';
    cout << "�g�L.push_back()��b�������ܪ�" << b.size() << endl;

    vector<int>c(3,88);
    for(int i=0; i<c.size(); i++) cout << c[1] << ' ';
    cout << "��l��(3,88)�N�|��3��88" << b.size() << endl;
}

/// week07-1b.cpp
/// TAICA NYCU
/// Input: 1-9 计 Output: 露伴よ
/// ex: Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 羆き糷加
/// Input 2 Τ 3 糷加, Input 3 Τ 5 糷加, Input 5 Τ 9 糷加
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n; /// Step01: Input

    for(int i=1; i<2*n; i++){ /// Step03: for癹伴, 加糷
        for(int j=1; j<2*n; j++){ /// 材碭
            if(j>1) cout << " "; /// Step05: ó繷 + ó碵
            int d = min(abs(i-n), abs(j-n));
            cout << d+1;
        }
        /// cout << "瞷琌材i加, i:" << i; /// Step04: 加糷芅琜(穦╊奔)
        cout << endl; /// Step02: Output, 铬︽
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans;
    ans = 0;
    // i = 1~nまでを確かめる。
    for(int i = 1; i <= n; i++) {
        // ok というtrue か falseをとる変数を準備。デフォルトでtrue
        bool ok = true;
        {
            int base = 10;
            // iで検証をすると、iが壊れてしまうので、xを定義。
            int x = i;
            // xの１の位を1の位から検証している。
            while(x > 0) {
                //  もし、xを10で割ったあまりが7であったら、okという変数をfalseにする。
                if( x % base == 7){
                    ok = false;
                }
                // 次のループに向け、xを10でわる。1の位を削る。
                x = x / 10;
            }
        }
        {
            int base = 8;
            int x = i;
            while(x > 0) {
                if( x % base == 7){
                    ok = false;
                }
                x = x / 8;
            }
        }
        // 上記2つの{}を抜けたあとにok == trueであれば、ansをプラスする。
        if(ok == true) {
            ans++;
        }
    }
    cout << ans << endl;
}
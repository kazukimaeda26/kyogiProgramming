#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    //文字列の入力
    int ans = 0;
    //0〜9999を回す
    for(int i=0; i<10000; ++i){
        //ベクトルを準備、何の数字が使われているかをこのベクトルで把握。1299 => 0110000001
        // default値は 0000000000
        vector<int> a(10);
        int x = i;
        for(int j=0; j<4; ++j){
            int d = x%10;
            a[d] = 1;
            x /= 10;
        }
        bool ok = true;
        for(int k=0; k<10; ++k){
            //文字列のk番目はvectorの要素の指定と同様に取得可能string[k]
            //sのk番目が"o"かつaのk番目が"1"でない場合、falseとする。使われている数字だと言われているのにも関わらず、ベクトルには記録がない。
            //sのk番目が"x"かつaのk番目が"0"でない場合、falseとする。使われていない数字だと言われているのにも関わらず、ベクトルに記録がされてしまっている。
            if(s[k] == 'o' && a[k] != 1) ok = false;
            if(s[k] == 'x' && a[k] != 0) ok = false;
        }
        if(ok) ++ans;
    }
    cout << ans << endl;
}
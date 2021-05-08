#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);

  int res = 0;

  for(int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  while(true){
    // exist_odd にfalseを代入しておく
    bool exist_odd = false;
    // 配列術の要素を2で割れるか確認している。
    // 1つでも2で割れないものが、あった場合、exist_oddをtrueに変更する。
    for (int i = 0; i < N; ++i){
      if(a[i] % 2 != 0) exist_odd = true;
    } 

    // exist_oddがtrueであった場合、while文を抜ける。つまり、(*)へ進む。
    // if(exist_odd == true) {
    //   break;
    // }
    if(exist_odd) break;


    // exist_oddがfalseであった場合にたどり着けるコード
    // 配列のすべての要素を2で割り、再代入する。
    for(int i = 0; i < N; i++) {
      // a[i] = a[i]/2;
      a[i] /= 2;
    }
    // このときに、resという変数を1プラスしている。
    ++res;
  }
  // (*)すべての処理を終え、resを出力。
  cout << res << endl;
}
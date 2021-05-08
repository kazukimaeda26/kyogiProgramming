#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  bool flg = true;

  if( x-r<0 || y-r<0 || x+r>W || y+r>H){
    flg = false;
  }

  if(flg == true){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
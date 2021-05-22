#include <bits/stdc++.h>
using namespace std;

bool solve(string s){
  if(s.size() == 1){
    return s == "8";
  }
  if(s.size() == 2){
    // stringからintegerへの変換はstringToInteger stringToLongLong stollもある。
    if(stoi(s)%8 == 0) return true;
    swap(s[0], s[1]);
    if(stoi(s)%8 == 0) return true;
    return false;
  }
  vector<int> cnt(10);
  // 数字の分布を求めておく。
  for(char c:s) cnt[c-'0']++;
  for(int i=0; i<1000; i+=8) {
    int x = i;
    vector<int> nc(10);
    for(int j=0; j<3; j++){
      nc[x%10]++;
      x/=10;
    }
    bool ok = true;
    for(int j=0; j<10; j++){
      if(nc[j]>cnt[j]) ok = false;
      if(ok) return true;
    }
    return false;
  }
}

int main(){
  string s;
  cin >> s;
  if(solve(s)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string ans;
  int l = s.length();
  ans += s[0];
  ans += to_string(l-2);
  ans += s[l-1];
  cout << ans << endl;
}
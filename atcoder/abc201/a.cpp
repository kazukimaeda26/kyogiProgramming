#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a > b) swap(a, b);
  if(b > c) swap(b, c);
  if(a > b) swap(a, b);

  if(c - b == b- a) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

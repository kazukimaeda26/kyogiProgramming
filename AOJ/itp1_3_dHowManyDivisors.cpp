#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int count = 0;
  while(a<=b){
    if(c%a==0){
      count++;
    }
    a++;
  }
  cout << count << endl;
}
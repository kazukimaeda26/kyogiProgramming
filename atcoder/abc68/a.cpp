#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int count = 0;
  int ans = 1;
  for (int i = 1; i <= N; ++i ){
    int x = i;
    int each_count = 0;
    while(x % 2 == 0){
      ++each_count;
      x /= 2;
    }
    if(each_count > count){
      count = each_count;
      ans = i;
    }
  }
  cout << ans << endl;
}
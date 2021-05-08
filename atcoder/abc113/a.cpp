#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, T, A;
  cin >> N >> T >> A;
  int judge = 1000000;
  vector<int> a(N);
  for(int i = 0; i < N; ++i){
    cin >> a.at(i);
  }
  int ans;
  for(int i = 0; i < N; ++i){
    int each_temp;
    each_temp = T - a.at(i)*0.006;
    a.at(i) =each_temp;
  }
  for(int i = 0; i < N; ++i){
    int each_diff;
    each_diff = A - a.at(i);
    if(each_diff < 0){
      each_diff = each_diff * (-1);
    }
    if(each_diff < judge){
      judge = each_diff;
      ans = i;
    }
  }
  cout << ans+1 << endl;
}
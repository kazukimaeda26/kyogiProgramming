#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i){
    cin >> a.at(i);
  }
  int ans = 0;
  for (int i = 0; i < N; ++i){
    for(int j = i+1; j < N; ++j){
      int each_ans;
      each_ans = a.at(i) - a.at(j);
      if (each_ans < 0) {
        each_ans = each_ans * (-1);
      }
      if(each_ans > ans){
        ans = each_ans;
      }
    }
  }
  cout << ans << endl;
}
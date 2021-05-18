#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  int K;
  cin >> N >> K;

  for(int i=0; i<K; i++){
    if(N % 200 == 0){
      N = N/200;
    }else{
      string str = to_string(N);
      str += "200";
      N = stoull(str);
    }
  }
  cout << N << endl;
}
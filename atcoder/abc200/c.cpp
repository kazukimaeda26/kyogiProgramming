#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);

  for(int i=0; i<N; i++){
    cin >> vec.at(i);
  }
  int count = 0;

  for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++ ){
      if((vec.at(i)-vec.at(j)) % 200 == 0){
        count += 1;
      }
    }
  }
  cout << count << endl;
}
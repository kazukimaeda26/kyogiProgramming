#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> vec(h+1, vector<int>(w+1));
  for(int i = 0; i < h+1; i++){
    int countX = 0;
    for(int j = 0; j < w+1; j++){
      if(j == w){
        cin >> vec.at(i).at(j);
      } else {
        cin >> vec.at(i).at(j);
        countX += vec.at(i).at(j);
      } 
    }
  }
}
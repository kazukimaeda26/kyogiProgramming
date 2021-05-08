#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<vector<int> > > vec(4, vector<vector<int> >(3, vector<int>(10)));

  vector<vector<int> > info(n, vector<int>(4));
  for(int i=0; i<n; i++){
    for(int j=0; j<4; j++){
      cin >> info.at(i).at(j);
    }
  }

  for(int i=0; i<n; i++){
    if(info.at(i).at(3)>8){
      info.at(i).at(3)=8;
    }
    else if(info.at(i).at(3)<0){
      info.at(i).at(3)=0;
    }
  }


  for(int i=0; i<n; i++){
    vec.at(info.at(i).at(0)-1).at(info.at(i).at(1)-1).at(info.at(i).at(2)-1) = info.at(i).at(3);
  }

  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<10; k++){
        cout << " " << vec.at(i).at(j).at(k);
      }
      cout << endl;
    }
    if(i!=3)cout << "####################" << endl;
  }
}
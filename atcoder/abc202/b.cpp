#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    for(int i=1; i<n+1; i++){
        if(s[n-i] == '6'){
            cout << '9';
        }else if (s[n-i] == '9') {
            cout << '6';
        } else {
            cout << s[n-i];
        }
    }
    cout << endl;
    return 0;
}
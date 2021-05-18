#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, string>> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].second >> a[i].first;
    }
    sort(a.rbegin(), a.rend());

    cout << a[1].second << endl;
    return 0;
}
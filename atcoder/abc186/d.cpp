#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long s = 0;
    long long ans = 0;
    for(int j=0; j<n; j++){
        ans += (long long)a[j]*j;
        ans -= s;
        s += a[j];
    }
    cout << ans << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    unordered_map<long long, int> mp;
    for (int i = 1; i <= n; ++i) {
        long long a;
        cin >> a;
        long long need = x - a;
        if (mp.count(need)) {
            cout << mp[need] << " " << i << '\n';
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}

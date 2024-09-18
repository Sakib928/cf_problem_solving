#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}
	array<int, 5> dp;
	dp.fill(-inf);
	dp[0] = 0;

	const string t = "narek";

	for (int i = 0; i < n; i++) {
		auto ndp = dp;
		for (int x = 0; x < 5; x++) {
			int y = x;
			int res =  dp[x];
			for (auto c : s[i]){
				if (c == t[y]) {
					y++;
					if (y == 5) {
						y = 0; 
						res += 5;
					}
				} else if (t.find(c) != - 1) {
					res--;
				}
			}
			ndp[y] = max(ndp[y], res);
		}
		dp = ndp;
	}

	int ans = 0;
	for (int i = 0; i < 5; i++) {
		ans = max(ans, dp[i] - i);
	}
	cout << ans << '\n';

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

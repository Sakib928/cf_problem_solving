#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string s = "aeiou";
	int k = n / 5, l = n % 5;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < k; j++) cout << s[i];
		if (i < l) cout << s[i];
	}
	cout << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

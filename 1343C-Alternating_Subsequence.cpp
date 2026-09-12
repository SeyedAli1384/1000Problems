#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<long long> a(n);

		for (auto &x : a)
			cin >> x;
		
		long long ans = 0;
		long long mx = a[0];

		for (int i=1 ; i < n ; i++){
			if ((a[i] > 0) == (a[i -1] > 0))
				mx = max(mx , a[i]);
			else{
				ans += mx;
				mx = a[i];
			}
		}

		ans += mx;

		cout << ans << endl;
	}

	return 0;
}

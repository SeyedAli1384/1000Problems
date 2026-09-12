#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
    	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		long long n , x , y;
		cin >> n >> x >> y;
		
		long long lm = lcm(x, y);
		long long dx = n / x - n / lm;
		long long dy = n / y - n / lm;
		long long ans = 0;	
		
		// for (long long i=n ; i > n - dx ; i--)
			// ans += i;

		// for (long long i=1 ; i < dy + 1 ; i++)
			// ans -= i;

		ans = dx * (2 * n - dx + 1) / 2 - dy * (dy + 1) / 2;

		cout << ans << endl;

	}
}

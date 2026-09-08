#include <iostream>
#include <vector>
#include <algorithm>

//solving Problem 492B Codeforces

using namespace std;

int main(){
	long long n , l;
	cin >> n >> l;
	vector<int> a(n);
	for (int i=0 ; i < n ; i++){
		cin >> a[i];
	}

	sort(a.begin() , a.end());

	double maxdiff = 0;

	for (int i = 0; i < n - 1; i++) {
        maxdiff = max(maxdiff, (a[i + 1] - a[i]) / 2.0);
    	}


	double first = a[0];
    	double last = l - a[n - 1];

	double answer = max({first, last, maxdiff});

    	cout << answer << '\n';
	
	return 0;
}

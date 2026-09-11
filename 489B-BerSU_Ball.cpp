#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int n , m;
	cin >> n;
	vector<int> a(n);
	for (int i=0 ; i < n ; i++){
		cin >> a[i];
	}
	cin >> m;
	vector<int> b(m);
	for (int i=0 ; i < m ; i++){
		cin >> b[i];
	}
	
	sort(a.begin() , a.end());
	sort(b.begin() , b.end());
	
	int i = 0;
    	int j = 0;
    	int count = 0;

    	while (i < n && j < m) {

        	if (abs(a[i] - b[j]) <= 1) {
            		count++;
            		i++;
            		j++;
        	}
        	else if (a[i] < b[j]) {
            		i++;
        	}
        	else {
            		j++;
        	}
    	}
	cout << count << endl;

	return 0;
}

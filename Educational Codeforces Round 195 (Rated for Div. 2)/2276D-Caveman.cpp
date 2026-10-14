#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;

        vector<int> d(n , 0);

        for (int i=0 ; i < m ; i++){
            int u , v;
            cin >> u >> v;
            u--;
            v--;
            d[u]++;
            d[v]++;
        }

        bool iso = false;
        int maxd = 0;

        for (int x : d){
            if (x == 0)
                iso = true;
            maxd = max(maxd , x);
        }

        if (iso){
            cout << "Brain Melt" << endl;
        } else if (maxd == n-1 and m == n-1){
            cout << "2" << endl;
        } else {
            cout << "Many" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n , k;
        cin >> n >> k;

        vector<int> a(n+1);
        for (int i = 1 ; i < n+1 ; i++)
            cin >> a[i];
        
        vector<int> pre(n+1 , 0);
        for (int i = 1 ; i < n+1 ; i++)
            pre[i] =  (pre[i-1] + a[i]) % k;

        vector<long long> fre(k , 0);
        long long ans = 0;
        for (int i = k+1 ; i < n+1 ; i++){
            fre[pre[i-k-1]]++;
            ans += fre[pre[i]];
        }

        cout << ans << endl;
    }
    return 0;
}
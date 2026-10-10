#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    int target = n - m;
    vector<long double> E(n+1, 0.0L);
    for(int i = target+1; i <= n; ++i){
        long double sum = 0.0L;
        for(int j = 0; j < i; ++j) sum += E[j];
        E[i] = 1.0L + sum / i;
    }
    long double raw = E[n];
    // add a tiny epsilon to handle binary representation edge cases
    long double rounded = floor(raw * 100.0L + 0.5000000001L) / 100.0L;
    cout.setf(ios::fixed);
    cout<<setprecision(2)<<(double)rounded<<"\n";
    return 0;
}


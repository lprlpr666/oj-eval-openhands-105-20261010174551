// Solution for problem 105 - expected days calculation
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
    // robust rounding to two decimal places (half up)
    long double val = raw * 100.0L;
    long long iv = (long long) floor(val + 0.5L + 1e-12L);
    double rounded = iv / 100.0;
    printf("%.2f\n", rounded);
    return 0;
}






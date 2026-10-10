#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    int target = n - m; // remaining apples when m have been eaten
    vector<double> E(n+1, 0.0);
    // E[i] = expected days to reach <= target from i apples remaining
    for(int i = target+1; i <= n; ++i){
        double sum = 0.0;
        for(int j = 0; j < i; ++j){ // j = remaining after eating
            sum += E[j];
        }
        E[i] = 1.0 + sum / i;
    }
    cout.setf(ios::fixed);
    cout<<setprecision(2)<<E[n]<<"\n";
    return 0;
}

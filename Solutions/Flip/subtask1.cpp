// Author : ysh
// 2024/07/11 Thu 01:03:17
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r,s,a,b;cin>>r>>a>>s>>b;
    for(int i = 0;i<(a * b);i++) {
        if(i % a == r && i % b == s) return cout<<i,0;
    }
    cout<<-1;
    return 0;
}

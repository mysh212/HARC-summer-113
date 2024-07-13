// Author : ysh
// 2024/07/11 Thu 01:03:17
#include<bits/stdc++.h>
using namespace std;
#define int long long
inline int check(int a,int b,int r) {
    int now = 0;
    for(int i = 0;i<b;i++) {
        if(now == r) return i;
        now = (now + a) % b;
    }
    if(now == r) return b;
    return -1;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r,s,a,b;cin>>r>>a>>s>>b;
    while(r < s) r += a;
    int hold = min(r,s);
    r = r - hold;
    s = s - hold;
    // cout<<r<<" "<<a<<"\n"<<s<<" "<<b;

    int ans = check(b,a,r);
    // cerr<<ans<<"\n";
    if(ans == -1) return cout<<-1,0;
    cout<<(b * ans) + hold;
    return 0;
}

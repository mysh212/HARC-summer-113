// Author : ysh
// 2024/07/11 Thu 01:36:08
#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);
    int n = atoi(as[1]);
    int m = atoi(as[2]);
    
    n = rnd.next(1,n);
    m = rnd.next(1,m);

    cout<<rnd.next(0,n - 1)<<" "<<n<<"\n";
    cout<<rnd.next(0,m - 1)<<" "<<m<<"\n";
    return 0;
}
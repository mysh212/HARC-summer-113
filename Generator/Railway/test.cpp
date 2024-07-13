// Author : ysh
// 2024/07/11 Thu 01:36:08
#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    registerGen(ac,as,1);
    long long n = atoll(as[1]);
    
    cout<<rnd.next(1LL,n)<<"\n";
    return 0;
}

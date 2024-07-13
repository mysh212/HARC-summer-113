#include<bits/stdc++.h>
# 0 "bbc.cpp"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "bbc.cpp"



using namespace std;
const int R = (int) 1e9 + 7;

# 1 "/home/ysh/library/square" 1
unsigned long long __modnumber;
bool __mod = 0;

template<typename T>
struct t{
    vector<vector<T>>f;
    t(vector<vector<T>>&v) {
        f = move(v);
    }

    t(T n) {
        f.resize(n,vector<T>(n));
    }

    inline void mod(unsigned long long n) {
        __mod = 1;
        __modnumber = n;
        return;
    }

    inline t operator*(t x) {
        T n = x.f.size();
        t tmp = t(n);
        for(T i = 0;i<n;i++) {
            for(T j = 0;j<n;j++) {
                for(T k = 0;k < n;k++) {
                    tmp.f.at(i).at(j) += f.at(i).at(k) * x.f.at(k).at(j);
                    if(__mod) tmp.f.at(i).at(j) = tmp.f.at(i).at(j) % __modnumber;

                }
            }
        }
        return tmp;
    }

    inline void input(T n) {
        f.resize(n,vector<T>(n));
        for(T i = 0;i<n;i++) {
            for(T j = 0;j<n;j++) {
                cin>>f.at(i).at(j);
            }
        }
        return;
    }

    inline void print() {
        T n = f.size();
        for(T i = 0;i<n;i++) {
            for(T j = 0;j<n;j++) {
                cout<<f.at(i).at(j)<<" ";
            }
            cout<<"\n";
        }
        return;
    }

    inline t operator^(T k) {
        if(k == 1) return *this;
        t t = *this ^ (k >> 1);
        t = t * t;
        if(k & 1) {
            t = t * *this;
        }
        return t;
    }
};
# 8 "bbc.cpp" 2
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;cin>>n;
    if(n == 1) {
        cout<<0;
        return 0;
    }
    vector<vector<long long>>to({
        {0,1,0,0,1,0,0,0,0,0,0,1},
        {1,0,1,0,0,0,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,1,1,0,0,1,0,0},
        {0,0,0,0,0,1,1,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0},
        {1,0,1,0,0,0,0,0,0,0,0,0},
        {0,1,0,0,1,0,0,0,0,0,0,1},
        {0,0,0,0,0,0,0,1,1,0,0,0},
        {1,0,1,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0}

        });
    vector<vector<long long>>one({
        {1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0}

        });
    t<long long> tt(to), ff(one);
    tt.mod(R);ff.mod(R);
    auto ans = ((tt ^ (n - 1)) * ff);
# 70 "bbc.cpp"
    cout<<(ans.f.at(1).at(0) + ans.f.at(4).at(0) + ans.f.at(11).at(0)) % R;
    return 0;
}
/*
// Author : ysh
// 12/09/2022 Fri 16:29:56.33
// https://tioj.ck.tp.edu.tw/problems/2259
#include<bits/stdc++.h>
using namespace std;
const int R = (int) 1e9 + 7;
#define int long long
#include<square>
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    if(n == 1) {
        cout<<0;
        return 0;
    }
    vector<vector<int>>to({
        {0,1,0,0,1,0,0,0,0,0,0,1}, 
        {1,0,1,0,0,0,0,0,0,0,0,0}, 
        {1,0,1,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,1,1,0,0,1,0,0}, 
        {0,0,0,0,0,1,1,0,0,1,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,1,0}, 
        {1,0,1,0,0,0,0,0,0,0,0,0}, 
        {0,1,0,0,1,0,0,0,0,0,0,1}, 
        {0,0,0,0,0,0,0,1,1,0,0,0}, 
        {1,0,1,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,1,0}
        // {1,2,3,4,5,6,7,8,9,0,1,2}
        });
    vector<vector<int>>one({
        {1,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {1,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0,0,0,0,0,0}
        // {0,2,3,4,5,6,7,8,9,0,0,2}
        });
    t<int> tt(to), ff(one);
    tt.mod(R);ff.mod(R);
    auto ans = ((tt ^ (n - 1)) * ff);
    // vector<vector<int>>from({{1,4,11}, {0,2}, {0,2}, {}, {6,5,9}, {5,6,9}, {10}, {0,2}, {1,4,11}, {7,8}, {0,2}, {10}});
    // for(int i = 0;i<=11;i++) {
    //     for(auto &j : from.at(i)) {
    //         if(!to.at(i).at(j)) cerr<<i<<" "<<j<<"\n";
    //     }
    // }
    // return 1;
    // vector<vector<int>>f(2,vector<int>(from.size()));
    // f.at(1).at(0) = f.at(1).at(8) = 1;
    // for(int i = 0;i<n - 1;i++) {
    //     int p = i & 1;
    //     for(int j = 0;j<=from.size() - 1;j++) {
    //         f.at(p).at(j) = 0;
    //         for(int &i : from.at(j)) {
    //             f.at(p).at(j) += f.at(!p).at(i);
    //         }
    //         f.at(p).at(j) = f.at(p).at(j) % R;
    //     }
    // // for(auto i : f.at(p)) cerr<<i<<" "; cerr<<"\n";
    // }
    cout<<(ans.f.at(1).at(0) + ans.f.at(4).at(0) + ans.f.at(11).at(0)) % R;
    return 0;
}
*/

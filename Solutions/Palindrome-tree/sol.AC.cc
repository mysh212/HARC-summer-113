#include <cstdio>
#include <cstring>
#include <cassert>

#include <algorithm>
#include <set>
#include <map>
#include <iomanip>
#include <limits>
#include <iostream>
#include <chrono>
#include <queue>
#include <random>
#include <functional>
#include <vector>
#include <bitset>

using namespace std;

#ifdef LOCAL
#include "debug"
#else
#define debug(...)
#endif

using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using usize = size_t;
using f64 = double;

template <class T>
constexpr T infty = 0;
template <>
constexpr int infty<int> = int(1e9);
template <>
constexpr int64_t infty<int64_t> = int64_t(1e18);
template <>
constexpr __int128_t infty<__int128_t> = __int128_t(1e36);
template <>
constexpr double infty<double> = 1e30;

#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fi first
#define se second

template<class T> bool chmin(T& a, T b) {
  if (a > b) { a = b; return true; }
  return false;
}
template<class T> bool chmax(T& a, T b) {
  if (a < b) { a = b; return true; }
  return false;
}

int main() {
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  usize n;
  cin >> n;
  vector<usize> p(n);
  for (usize i = 1; i < n; i++) {
    cin >> p[i];
  }
  string s;
  cin >> s;
  vector<vector<pair<usize, i32>>> adj(n);
  for (usize i = 1; i < n; i++) {
    const i32 c = int(s[i] - 'a');
    adj[p[i]].emplace_back(i, c);
  }
  queue<i32> q({0});
  vector<i32> dis(n);
  while (not q.empty()) {
    const i32 x = q.front(); q.pop();
    for (const auto &[y, w] : adj[x]) {
      dis[y] = dis[x] ^ (1 << w);
      q.push(y);
    }
  }
  map<i32, i32> mp;
  const auto query = [&](const auto msk) {
    if (not mp.contains(msk)) return 0;
    return mp[msk];
  };
  i64 ans = 0;
  for (usize x = 0; x < n; x++) {
    const auto msk = dis[x];
    ans += query(msk);
    for (i32 i = 0; i < 26; i++) {
      ans += query(msk ^ (1 << i));
    }
    mp[msk] += 1;
  }
  cout << ans << '\n';
  return 0;
}
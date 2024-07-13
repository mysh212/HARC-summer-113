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
  i32 r, a, s, b;
  cin >> r >> a >> s >> b;
  if ((r - s) % gcd(a, b) != 0) {
    cout << -1 << '\n';
    return 0;
  }
  if (a > b) swap(a, b), swap(r, s);
  for (i64 c = 0; ; c++) {
    const i64 x = c * b + s;
    if (x % a == r) {
      cout << x << '\n';
      return 0;
    }
  }
  return 0;
}
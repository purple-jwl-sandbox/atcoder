#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x.size())
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)
#define uniq(x) x.erase(unique(x.begin(), x.end()), x.end())
#define F first
#define S second
#define mp make_pair
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>

using namespace std;

typedef long long ll;

/* --- INFやMODの値が適切か確認する --- */
const int INF = 1 << 30;
// const ll INF = 1LL << 60;
// const ll MOD = 1000000007;

int f(ll v) {
  int cnt = 0;
  while (v > 0) {
    cnt++;
    v /= 10;
  }
  return cnt;
}

int main() {
  ll n;
  cin >> n;

  int ans = INF;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) ans = min(ans, max(f(i), f(n / i)));
  }

  cout << ans << endl;
}

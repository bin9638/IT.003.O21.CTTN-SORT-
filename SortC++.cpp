// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
// __builtin_popcount
// __builtin_ctz
#define int long long
#define pii pair<int, int>
#define duoble long double
#define endl '\n'
#define fi first
#define se second
#define mapa make_pair
#define pushb push_back
#define pushf push_front
#define popb pop_back
#define popf pop_front
#define o_ ordered_
#define ins insert
#define era erase
#define pqueue priority_queue
#define minele min_element
#define maxele max_element
#define lb lower_bound // >=
#define ub upper_bound // >
#define debug cout << "NO ERROR", exit(0)
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define ALL(v) v.begin(), v.end()
#define SZ(v) (int)v.size()
#define sqr(x) ((x) * (x))

template<class X, class Y>
    bool minimize(X &x, const Y &y) {
        if (x > y) {
            x = y;
            return true;
        }
        return false;
    }
template<class X, class Y>
    bool maximize(X &x, const Y &y) {
        if (x < y) {
            x = y;
            return true;
        }
        return false;
    }

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

int Rand(const int &l, const int &r) {
    assert(l <= r);
    int sz = (r - l + 1);
    return l + rd() % sz;
}


const int MOD = 1e9 + 7; //998244353;
const int LOG = 18;
const int INF = 1e9 + 7;
const int d4x[4] = {-1, 1, 0, 0};
const int d4y[4] = {0, 0, 1, -1};
const char c4[4] = {'U', 'D', 'R', 'L'};
const int d8x[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const int d8y[8] = {1, 1, 0, -1, -1, -1, 0, 1};


const int LimN = 5e5 + 5;

int n, a[LimN];

void solve() {

    sort(a + 1, a + 1 + n);

}

signed main() {


    freopen("TimeSortC++.out", "w", stdout);
    FAST;
    bool TestCase = 0;
    int NumTest = 10;
    //cin >> NumTest;
    for (int i = 1; i <= NumTest; i++) {
        string file = "Test";
        file += (i < 10 ? "0" : "");
        file += to_string(i) + ".inp";
        ifstream inp(file);
        inp >> n;
        for (int i = 1; i <= n; i++) inp >> a[i];
        auto start = high_resolution_clock::now();
        solve();
        auto end = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(end - start);
		cout << (double)duration.count() / 1000 << endl;
    }

}




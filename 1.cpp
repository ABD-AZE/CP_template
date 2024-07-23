#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <unordered_set>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds; 
using ll=long long;
using ld=long double;
using vl=vector<ll>;
using sl=set<ll>;
using msl=multiset<ll>;
using ma=map<ll,ll>;
using pall = pair<ll,ll>;
#ifndef ONLINE_JUDGE
#include "debug.cpp"
#define debug(...) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__)
#define debugArr(...) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printerArr(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...)
#define debugArr(...)
#endif
#define fi first
#define se second
#define vecp(v) vector<pair<ll,ll>>v;
#define forr(i,a,b) for(i=a;i<=b;i++)
#define maxi(v) max_element(all(v))
#define mini(v) min_element(all(v))
#define lb(n) lower_bound(n)
#define ub(n) upper_bound(n)
#define lbd(v,n) lower_bound(all(v),n)
#define ubd(v,n) upper_bound(all(v),n)
#define f(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define forvp(v) for(const auto& vp:v)
#define forv(v) for(auto& vc:v)
#define all(v) v.begin(),v.end()
#define getv(v,n) vl v(n); f(i,n) cin>>v[i]
#define bs(n,x) bitset<n> (x).to_string()
#define inf 9223372036854775807
typedef tree<ll, null_type, less<ll>, rb_tree_tag,  tree_order_statistics_node_update>  ordered_set;
ll MOD = 1e9 + 7;
ll MOD2=998244353;

ll bin_exp(ll a, ll b, ll mod){a %= mod; ll ans = 1;while(b > 0){if(b & 1){ans = (ans * a) % mod;}a = (a * a) % mod;b >>= 1;}return ans;}
ll bin_exp(ll a, ll b){ll ans = 1;while(b > 0){if(b & 1){ans *= a;}a *= a;b >>= 1;}return ans;}
ll gcd(ll a, ll b){while(b){a %= b; swap(a, b);} return a;}
ll lcm(ll a, ll b){return a/gcd(a, b)*b;}
ll inv(ll x) { return bin_exp(x % MOD, MOD - 2, MOD); }
ll gcd_ext(ll a, ll b, ll& x, ll& y) {if (b == 0) {x = 1;y = 0;return a;}ll x1, y1;ll d = gcd_ext(b, a % b, x1, y1);x = y1; y = x1 - y1 * (a / b);return d;}
ll mod_inv(ll a, ll m) {
    ll x, y;
    ll g = gcd_ext(a, m, x, y);
    if (g != 1) {
        return -1;
    }
    else {
        x = (x % m + m) % m;
        return x;
    }
}
ll fact[1000001];
void factorial() {
    fact[0] = 1; ll i;
    forr(i, 1, 1000000)
        fact[i] = (i * fact[i - 1]) % MOD;
}
ll nck(ll n, ll k) {
    if (n >= k)
        return (((fact[n] * (mod_inv(fact[k], MOD))) % MOD) * mod_inv(fact[n - k], MOD)) % MOD;
    else
        return 0;
}
vector<ll> primes;
vector<bool> prime;
vector<int> lp;
 
//LINEAR SIEVE 
void linear_seive(int n){lp.resize(n+1);for (int i=2; i <= n; ++i) {if (lp[i] == 0) {lp[i] = i;primes.push_back(i);}for (int j = 0; i * primes[j] <= n; ++j) {lp[i * primes[j]] = primes[j];if (primes[j] == lp[i]) {break;}}}}

//SIEVE OF ERASTOSTHENES
void sieve(int n){prime.resize(n + 1);for (int p = 0; p <= n; p++) {prime[p] = 1;}for (int p = 2; p * p <= n; p++) {if (prime[p] == true) {for (int i = p * p; i <= n; i += p)prime[i] = false;}}for (int p = 2; p <= n; p++)if (prime[p])primes.pb(p);}

void solve()
{
    ll n,m,k=0,j=0,i=0,x=0,y=0,z=0,p=0,q=0,l=0,sum=0,f=0,temp=0,flag=0,a=0,b=0,d=0,r=0,mn=inf,mx=-inf,_,__,ans=0;
    string s1="",s2,s3,s;char c;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
}

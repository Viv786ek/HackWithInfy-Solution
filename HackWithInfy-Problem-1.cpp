#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define rep(i, n)    for(ll i = 0; i < (n); ++i)
#define repA(i, a, n)  for(ll i = a; i <= (n); ++i)
#define repD(i, a, n)  for(ll i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fill(a)  memset(a, 0, sizeof (a))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9+7;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tt=1;
        cin >> tt;
    while((tt)--){
        ll n; cin >> n;
        vll chr(26,0);
        rep(i,n){
            string s; cin >> s;
            rep(j,s.size()){
                chr[s[j]-'a']++;
            }
        }
        string mohit ;
        ll f=0;
        rep(i,26){
            if(chr[i]==0){
                f=1; mohit = (char)(i+'a');
                break;
            }
        }
        if(f){
            cout <<  mohit << endl;
        }else{
            cout <<  -1 << endl;
        }
    }
}


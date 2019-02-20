/*
 		Resilience is the greatest of all virtues.
 		Code by rajiv
 */
 #include <iostream>
 #include <cstring>
 #include <vector>
 #include <map>
 #include <set>
 #include <stack>
 #include <queue>
 #include <deque>
 #include <sstream>
 #include <iomanip>
 #include <cassert>
 #include <sys/time.h>
 #include <algorithm>
 #include <bitset>
 #include <cmath>
 #include <functional>
 #include <cmath>

 using namespace std ;

 #define xx first
 #define yy second
 #define ll long long
 #define ld long double
 #define el (char)0x0A
 #define sp " "
 #define pb push_back
 #define mp make_pair
 #define all(x) (x).begin(),(x).end()
 #define clr(x) memset((x),0,sizeof(x))
 #define uint unsigned int
 #define abs(x) ((x<=0)?(-x):(x))
 #define CASET  int t;cin>>t;while(t--)
 #define FORN(i,x,y) for(int i=x;i<y;i++)
 #define MAXN 100005
 #define INF 10000000010
 #define MOD 1000000007
 #define last_set_bit(x) log2((x)&(-x))
 #define add(x,y) (x)=((x)+(y))%MOD
 #define PI 3.141592653589793

 typedef pair<int,int> PII ; typedef vector<int> VI ; typedef vector<vector<int> > VVI ; typedef vector<bool> VB ; typedef vector<string> VS ;
 typedef map<int,int> MII ; typedef map<int,VI > MIV ; typedef set<int> SI ; typedef set<PII > SPII ; typedef vector<PII > VPII ; typedef vector<VPII > VVPII ;

 ll po(ll a, ll x , ll mod){
     if (x == 0) return 1LL ;
     ll temp = po(a,x/2,mod) ;
     temp = temp * temp % mod ;
     if (x&1) return a*temp % mod ;
     return temp ;
 }
 ll invmod(ll a, ll mod){
     return po(a,mod-2,mod) ;
 }
 ll invpo(ll a, ll x, ll mod){
     ll t = po(a,x,mod) ;
     return invmod(t,mod) ;
 }
 map<ll,ll> mark ;


 int main(){
 	ios_base::sync_with_stdio(false) ;
 	cin.tie(nullptr) ;
    ll ans = 0 ;
    ll a , b , p , x ;
    cin >> a >> b >> p >> x ;
    for(ll i = 0 ; i < p ; i++){
        ll aa = i ;
        ll ab = b*invpo(a,i,p) % p ;    
        ll ap = p-1 ;
        ll aq = p ;
        ll ap1 = invmod(ap,aq) ;
        ll aq1 = invmod(aq,ap) ;
        ll N = p*(p-1) ;
        ll an = (aa*aq*aq1 + ab*ap*ap1)%N ;
        if (mark[an]) continue ;
        if (an > x) continue ;
        mark[an] = 1;
        ans += (x-an)/N + 1 ;
    }

    cout << ans << el ;
    return 0 ;
 }
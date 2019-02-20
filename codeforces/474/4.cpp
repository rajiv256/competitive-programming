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

 const int N = 63 ;
 ll shift[N] , po[N] ;

 int depth(ll X){
     return log2(X) ;
 }
 ll size(ll X){
     int d = depth(X) ;
     return (1LL<<(d+1))-(1LL<<d) ;
 }


 int main(){
 	ios_base::sync_with_stdio(false) ;
 	cin.tie(nullptr) ;
    po[0] = 1 ;
    for(int i = 1 ; i < 63 ; i++){
        po[i] = po[i-1]*2 ;
    }
    ll X , K   ;
    ll Q ; cin >> Q ;
    while (Q--){
        int T ; cin >> T ;
        if (T == 1){
            cin >> X >> K ;
            int d = depth(X) ;
            ll sz = size(X) ;
            shift[d] += K ;
        }
        if (T == 2){
            cin >> X >> K ;
            int d = depth(X) ; ll sz = size(X) ;
            for(int i = d ; i <= 62 ; i++){
                shift[i] += K ;
                K *= 2 ;
            }

        }
        if (T == 3){
            cin >> X ;
            cout << X << sp ; int d = depth(X) ; ll sz = size(X) ;

            ll inc = shift[d]%sz ; if (inc < 0) inc += sz ;

            ll lb = 1LL<<d ; ll ub = (1LL<<(d+1))-1 ;
            X += inc ; if (X > ub) X = lb+(X-ub-1) ;
            while (X != 1){
                X /= 2 ;

                d-- ; sz /= 2 ; lb /= 2 ; ub /= 2 ;
                inc = shift[d]%sz ; if (inc < 0) inc += sz ;
                ll val = X ; val -= inc ;
                if (val < lb) val = ub-(lb-val-1) ;
                cout << val << sp ;
            }
            cout << el ;
        }
    }
    return 0 ;
 }
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
 const int N = 5050 ;
 ll dp[N][N] ;
 int n ; string s;

 int main(){
 	ios_base::sync_with_stdio(false) ;
 	cin.tie(nullptr) ;
    memset(dp,0,sizeof dp) ;
    cin >> n ;
    s = '@'  ;
    FORN(i,0,n){
        char ch ; cin >> ch ;
        s += ch ;
    }
    dp[0][0] = 1;
    for(int i = 1 ; i < s.size() ; i++){
        if (i > 1 && s[i-1]=='f'){
            for(int j = 0 ; j <= 5000 ; j++){
                dp[i][j] = dp[i-1][j-1] ;
            }
        }
        else{
            for(int j = 5000 ; j >= 0 ; j--){
                dp[i][j] += dp[i-1][j]+dp[i][j+1] ;
                dp[i][j] %= MOD ;
            }
        }
    }
    ll ans = 0;
    for(int i = 0 ; i <= n ; i++){
        ans += dp[n][i] ;
        ans %= MOD ;
    }
    cout << ans << el ;
    return 0 ;
 }

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

int main(){
    int N , M , K ; cin >> N >> M >> K ;
    int p[N+1] , s[N+1] ;
    for(int i = 1 ; i <= N ; i++) cin >> p[i] ;
    for(int i = 1 ; i <= N ; i++) cin >> s[i] ;

    map<int,int> m ;
    for(int i = 1 ; i <= N ; i++){
        if (p[i] > m[s[i]]){
            m[s[i]] = p[i] ;
        }
    }
    int ans = 0 ; 
    for(int i = 1 ; i <= K ; i++){
        int x ; cin >> x ;
        if (p[x] != m[s[x]]){
            ans++ ;
        }
    }
    cout << ans << el ;
    return 0 ;



}
































//}

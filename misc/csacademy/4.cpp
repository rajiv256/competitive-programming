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

 void dfs(int src, VVI& adj, VB& vis, VI& v, int comp){
     vis[src] = true ;
     if (adj[src].size()%2 == 0 && v[comp]==0){
         v[comp]  = 1 ;
     }
     for(int i =0 ; i < adj[src].size() ; i++){
         int ch = adj[src][i] ;
         if (!vis[ch]){
             dfs(ch,adj,vis,v,comp) ;
         }
     }
 }



 int main(){
 	ios_base::sync_with_stdio(false) ;
 	cin.tie(nullptr) ;
    CASET {
        int n , m ; cin >> n >> m ;
        VVI adj(n,VI()) ;
        FORN(i,0,m){
            int x , y ; cin >> x >> y ; x-- ; y-- ;
            adj[x].pb(y) ;
            adj[y].pb(x) ;
        }
        int cnt = 0 ;
        for(auto c : adj){
            cnt += (c.size()%2==0) ;
        }
        if (cnt == 0){ cout << 0 << el ; continue ; }
        VB vis(n,false) ; int comp = 0 ; VI v(10000,0) ;
        for(int i = 0 ; i < n ; i++){
            if (!vis[i]){
                dfs(i,adj,vis,v,comp) ;
                comp++ ;
            }
        }
        int acomp = 0 ;
        for(int i = 0 ;i < comp ; i++){
            if (v[i]!=0) acomp++ ;
        }
        cout << (acomp&1) << el ;
    }
 }
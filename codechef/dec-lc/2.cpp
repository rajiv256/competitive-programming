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
 char ori[102][102] ;
 char dup[102][102] ;
 char dup1[102][102] ;

 int main(){
 	ios_base::sync_with_stdio(false) ;
 	cin.tie(nullptr) ;
    CASET {
        int R, C ; cin >> R >> C ;

        char ch ;
        FORN(i,0,R){
            FORN(j,0,C){
                cin >> ch ;
                ori[i][j] = ch ;
            }
        }
        char st = 'R' ;
        FORN(i,0,R){
            ch = st ;
            FORN(j,0,C){
                dup[i][j] = ch ;
                ch = (ch=='R')?'G':'R' ;
            }
            st = (st=='R')?'G':'R' ;
        }
        st = 'G' ;
        FORN(i,0,R){
            ch = st ;
            FORN(j,0,C){
                dup1[i][j] = ch ;
                ch = (ch=='R')?'G':'R' ;
            }
            st = (st=='R')?'G':'R' ;
        }


        int ans1 = 0 , ans = 0 ;

        FORN(i,0,R){
            FORN(j,0,C){
                if (dup[i][j]!=ori[i][j]){
                    if (dup[i][j]=='R') ans += 3 ;
                    else ans += 5 ;
                }
                if (dup1[i][j]!=ori[i][j]){
                    if (dup1[i][j]=='R') ans1 += 3 ;
                    else ans1 += 5 ;
                }
            }
        }
        cout << min(ans,ans1) << el ;

    }

 }
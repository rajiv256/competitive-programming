
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
#define PI 3.14159265358979

int main(){
    string s ; cin >> s ;
    int cnt = 0 ;
    int idx = 0 ;
    while (idx < (int)(s.size()-1)){

        if (s[idx] == s[idx+1]){
            s.erase(s.begin()+idx) ;
            s.erase(s.begin()+idx) ;
            idx = max(idx-1, 0) ;
            cnt += 1; 
            continue ;
        }
        else{
            idx++ ;
        }
    }

    if (cnt % 2 == 0){
        cout << "NO" << el ;
    }
    else{
        cout << "YES" << el ;
    }
    return 0 ;
}

#include <bits/stdc++.h>
using namespace std ;

typedef vector<int> vi ;
typedef vector<char> vc ;
typedef vector<pair<int,int> > vp ;
typedef vector<pair<int,pair<int,int> > > vpp ;
typedef vector<bool> vb ;
typedef set<int> si ;
typedef map<int,int> mi ;
typedef map<int,vector<int> > miv ;
typedef unsigned long long ull ;


#define forn(i,n) for(int i = 0; i < n ; i++)
#define vvi vector<vector<int> >
#define pi pair<int,int>
#define pp pair<int,pair<int,int> >
#define sii set<pair<int,int> >
#define INF 1000000
#define LIM 1000000000
#define sp " "
#define el "\n"
#define ll long long
#define rsz(n) resize(n)
#define all(v) v.begin(),v.end()
#define xx first
#define yy second
#define pb push_back
#define mp make_pair
#define sci(x) scanf("%d",&x)
#define MXN 1000003
#define gc getchar_unlocked

ll ans (ll a){
    if (a < 0){
       return -a ;
    }
    else
        return a ;
}
int main(){
    ll a , b , c ;
    cin >> a >> b >> c ;
    if (c == 0){
        if (b-a == 0){
            cout << "YES" << el ;
            return 0 ;
        }
        cout << "NO" << el ;
        return 0 ;
    }
    if (c > 0){
        if (b < a){
            cout << "NO" << el ;
        }
        else{
            if ((b-a)%c == 0){
                cout << "YES" << el ;
            }
            else{
                cout << "NO" << el ;
            }
        }
    }
    if (c < 0){
        if (b > a){
            cout << "NO" << el ;
        }
        else{
            if ((a-b)%c == 0){
                cout << "YES" << el ;
            }
            else{
                cout << "NO" << el ;
            }
        }
    }
}
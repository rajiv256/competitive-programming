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
#define MXN 100003
#define gc getchar_unlocked

int main(){
	int t ;cin >> t ; 
	while(t--){
		int n ; 
		cin >> n ; 
		ll a[n] ; 
		for(int i=0 ; i <n ; i++){
			scanf("%lld",&a[i]) ; 
		}
		ll sum = 0 ; 
		for(int i = 0 ; i < n ; i++){
			sum ^= (ll)(log2((double)a[i])/log2((double)30)) ; 
		}
		if (sum&1){
			cout << "Derek" << endl ; 
		}
		else{
			cout << "Henry" << endl ; 
		}
	}
}
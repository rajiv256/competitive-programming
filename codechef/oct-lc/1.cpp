/* 
        Code written by rajiv. 
        God speed!
*/
#include <bits/stdc++.h>
using namespace std ;

#define ll long long
#define el endl
#define sp " "
#define forn(i,st,en) for(int i=st;i<en;i++)
#define sci(x) scanf("%d",&x)
#define scll(x) scanf("%lld",&x)
#define sclf(x) scanf("%lf",&x)
#define clr(x) memset(x,0,sizeof(x))
#define MXN 100005
#define INF 1000000000
#define MOD 1000000007
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define xx first
#define yy second
#define hashp 999983 

typedef vector<int> vi ; typedef vector<char> vc ; typedef vector<pair<int,int> > vp ; typedef vector<vector<int> > vvi ;
typedef vector<vector<pair<int,int> > > vvp  ;typedef vector<pair<pair<int,int>,int > > vpp ;typedef vector<bool> vb ;
typedef set<int> si ;typedef map<int,int> mii ;typedef map<int,vector<int> > miv ; typedef unsigned long long ull ; 

int main(){
	int t ; sci(t) ; 
	
	while (t--){
		int n , p ; sci(n); sci(p) ; 
		int a[n] ; 
		forn(i,0,n){
			sci(a[i]) ;
		}
		if (p < 3){
			printf("no\n");
			continue ; 
		}
		int cw = 0 ; int hard = 0 ; 
		forn(i,0,n){
			if (a[i] >= p/2){
				cw++ ; 
			}
			if (a[i] <= p/10){
				hard++ ; 
			}
		}
		if (cw==1 && hard==2){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0 ; 
}
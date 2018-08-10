#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 
#define el endl 
#define sp " "
#define forn(i,st,en) for(int i=st;i<en;i++)
#define sci(x) scanf("%d",&x)
#define scll(x) scanf("%lld",&x)
#define clr(x) memset(x,0,sizeof(x))
#define MXN 100003 
#define INF 1000000000
#define MOD 1000000007
#define all(x) x.begin(),x.end()


typedef vector<int> vi ;
typedef vector<char> vc ;
typedef vector<pair<int,int> > vp ;
typedef vector<vector<int,int> > vvi ; 
typedef vector<vector<pair<int,int> > > vvp  ;
typedef vector<pair<pair<int,int>,int > > vpp ;
typedef vector<bool> vb ;
typedef set<int> si ;
typedef map<int,int> mii ;
typedef map<int,vector<int> > miv ;
typedef unsigned long long ull ;
#define pb push_back
#define mp make_pair
#define xx first
#define yy second

void printv(vi& v){
	forn(i,0,v.size()){
		cout << v[i] << " " ; 
	}
	cout << el ;
}
int sumv(vi& v){
	int sum = 0 ; 
	forn(i,0,v.size())
		sum += v[i] ; 
	return sum ; 
}


int solve(int idx, int pre[] , int suf[],string str,int sz){
	int p = pre[idx] ; 
	int s = suf[idx] ; 
	if (str[idx] == 'U'){
		p-- ; 
	}
	else{
		s-- ; 
	}
	
}


int main(){
	int n  ; cin >> n ;
	string s ; cin >> s ; 
	s = "@"+s ; 
	s += "@" ; 
	int pre[n+2] ; 
	int suf[n+2] ;
	pre[0] = 0 ; 
	for(int i = 1 ; i <= s.size() ; i++){
		pre[i] = pre[i-1]+(s[i]=='U') ; 
	} 
	suf[n+1] = 0 ; 
	for(int i = n ; i>= 0 ; i--){
		suf[i] = suf[i+1]+(s[i]=='D') ; 
	}
	int ans[n] ;
	for(int i = 1 ; i <= n ; i++){
		ans[i-1] = solve(i,pre,suf,s,n+2) ; 
	} 



}
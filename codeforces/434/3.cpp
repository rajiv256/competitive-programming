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

typedef vector<int> vi ; typedef vector<char> vc ; typedef vector<pair<int,int> > vp ; typedef vector<vector<int> > vvi ;
typedef vector<vector<pair<int,int> > > vvp  ;typedef vector<pair<pair<int,int>,int > > vpp ;typedef vector<bool> vb ;
typedef set<int> si ;typedef map<int,int> mii ;typedef map<int,vector<int> > miv ; typedef unsigned long long ull ; 


bool valid(string s){
	set<char> ss; 
	for(int i =0 ; i < s.size() ; i++){
		ss.insert(s[i]) ; 
	}
	if (ss.size() >= 2) return false ; 
	return true ; 
}
bool isov(char c){
	char ovels[5] = {'a','e','i','o','u'} ; 
	return binary_search(ovels,ovels+5,c) ; 
}

int main(){
	string s ; cin >> s ;
	
	int st = 0 ; string ans = "" ;  
	while (st <= s.size()-1){
		
		if (isov(s[st]) || isov(s[st+1]) || isov(s[st+2])) {
			ans += s[st] ; 
			st++ ; 
			continue ; 
		}


		string x = s.substr(st) ;
		if (x.size() < 3){
			ans += x ; 
			break ;
		} 
		x = x.substr(0,3) ; 
		//cout << x << el ; 
		if (valid(x)){
			ans += s[st] ; //cout << "valid " << ans << el ;  
			st++ ; continue ; 
		}
		else{
			
			ans += x.substr(0,2) + " " ; 
			//cout << "notvalid " << ans << el ; 
			st += 2 ; continue ; 
		}



	}
	cout << ans << el ; 



}
#include <bits/stdc++.h>

using namespace std ;

typedef vector<int> vi ;
typedef vector<char> vc ;
typedef vector<pair<int,int> > vp ;
typedef vector<pair<int,pair<int,int> > > vpp ;
typedef vector<bool> vb ;
typedef set<int> si ;
typedef map<int,int> mii ;
typedef map<int,vector<int> > miv ;
typedef unsigned long long ull ;

#define forn(i,n) for(int i = 0; i < n ; i++)
#define INF 1000000
#define LIM 1000000000
#define sp " "
#define el endl
#define ll long long
#define all(v) v.begin(),v.end()
#define xx first
#define yy second
#define pb push_back
#define mp make_pair
//#define sci(x) scanf("%d",&x)
#define MXN 100003
#define gc getchar_unlocked	
void sci(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main(){
	int t ; sci(t) ; 
	while (t--){
		ll a , b , c ,d ; ll mini = 1000000000 ; 
		mini = min(abs(a-b),mini) ; 
		vector<pair<ll,ll> > v ; 
		v.pb(mp(a,c)); v.pb(mp(b,d)) ; 
		sort(all(v)) ; 
		ll upc = v[1].xx ; ll upm = v[1].yy ; 
		ll doc = v[0].xx ; ll dom = v[i].yy ; 
		
		if (upm < dom){
			cout << "0" << el ; 
			continue ; 
		}
		if (upm == dom){
			if (upc == doc){
				cout << "0" << el ; 
				continue ; 
			}
			else{
				vi v ; ll x , y ; a = upc ; b = doc ;c = upm ; d = dom ;  
				while (true){
					 
					
				}
			}
		}
		else{
			
		}
		
		
		
		
		
		
		
	}
	return 0 ;
}
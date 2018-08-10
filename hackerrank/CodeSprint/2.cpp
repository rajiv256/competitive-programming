#include <iostream>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std ;
#include <bits/stdc++.h> 
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
#define sci(x) scanf("%d",&x)
#define mp(a,b) make_pair(a,b)
#define abs(a) (a>0?a:-a)

int main(){
	int n , m ; cin >> n >> m ; 

	vi v ; v.rsz(m) ; 
	forn(i,m){
		cin >> v[i]; 
	}
	sort(all(v)) ; 
	int ans = -1 ; int curr = v[0]+1 ;
	ans = max(ans , v[0]) ; 
	ans = max(ans , n-1-v[m-1]) ;  
	for(int i = 0 ; i < m-1 ; i++){
		for (int j = v[i] ; j <= v[i+1] ; j++){
			ans = max(ans , min(j-v[i],v[i+1]-j)) ; 
		}
	}
	cout << ans << el ; 
	return 0 ; 

}
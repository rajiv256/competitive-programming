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
#define pp pair<int,pair<int,int> >
#define sii set<pair<int,int> >  
#define INF 1000000
#define LIM 1000000000
#define sp " " 
#define el "\n"
#define lld long long int 
#define rsz(n) resize(n)
#define all(v) v.begin(),v.end()
#define xx first 
#define yy second 
#define pb push_back
#define sci(x) scanf("%d",&x)
#define mp(x,y) make_pair(x,y) 

 int main(){
 	int n , k  ; 
 	cin >> n >> k ; 

 	int cnt = 0  ; 
 	vi v ; v.rsz(n) ;
 	forn(i,n){
 		cin >> v[i]  ; 
 	}
 	int fl = 0 ; 
 	forn(i,n){
 		if (v[i] <= k){
 			cnt += 1 ;
 			//fl = 0 ;  
 		}
 		else if (fl == 0){
 			fl += 1 ; 
 		}
 		else if (fl == 1 && v[i] > k){
 			break ; 
 		}
 	}
 	cout << cnt << el ; 
 	return 0 ; 
 }
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
	int n ; sci(n); 
	int a[n+1] ;
	a[n] = -1 ;  
	forn(i,n){
		sci(a[i]) ; 
	}
	int ans = 0 ;
	int it = 0 ; int fl = 1 ; 
	while (it < n){
		 
		if (a[it]%2==0){
			it++ ; continue ; 
		}
		if (a[it]&1  && a[it+1]==-1){
			fl = 0 ; 
			break ; 
		}
		if (a[it]%2==1 && a[it+1]%2==0){
			a[it] += 1; a[it+1] += 1 ; 
			ans += 2 ; 
			it += 1 ; 
			continue ; 
		}
		
		if (a[it]%2==1 && a[it+1]%2 ==1){
			ans += 2 ; a[it]+= 1 ; a[it]++ ; 
			it += 2 ; 
			continue ; 
		}
	} 
	if (!fl){
		printf("NO\n") ; 
		return 0 ; 
	}
	printf("%d\n",ans );
	return 0 ;
}	
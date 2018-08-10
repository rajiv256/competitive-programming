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
#define mp make_pair
#define sci(x) scanf("%d",&x)
#define MXN 1000003
#define gc getchar_unlocked


void scanInt(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int a[100009] ; 
int stree[3*100009] ; 
int lazy[3*100009] ; 

int build(int low , int high, int s){
    if (low == high){
        stree[s] = a[low] ;
        return stree[s] ;  
    }
    int mid = (low+high)/2 ; 
    int t1 = 2*s , t2 = 2*s+1 ; 
    stree[t1] = build(low,mid,t1) ; 
    stree[t2] = build(mid+1,high,t2) ; 
    return (stree[t1]+stree[t2]) ; 
}

void update(int low, int high , int left , int right , int s){
    //cout << low << sp << high << el ; 
    if (lazy[s]){
        stree[s] = high-low+1-stree[s] ; 
        if (low != high){
            lazy[2*s] = lazy[2*s]?0:1  ; 
            lazy[2*s+1] = lazy[2*s+1]?0:1 ;
        }
        lazy[s] = 0 ; 
    }
    if (left > high || right < low){
        return ; 
    }
    if (left <= low && right >= high){
        stree[s] = high-low+1-stree[s] ; 
        if (low != high){
            lazy[2*s] = lazy[2*s] ? 0 : 1  ; 
            lazy[2*s+1] = lazy[2*s+1] ? 0 : 1 ;  
        }
        return ; 
    }
    int mid = (low+high)/2 ; 
    update(low,mid,left,right,2*s) ; 
    update(mid+1,high,left,right,2*s+1) ; 
    stree[s] = stree[2*s]+stree[2*s+1] ; 
    return ; 
}

int query(int low , int high , int left , int right , int s){
    if (lazy[s]){
        stree[s] = (high-low+1-stree[s]) ; 
        lazy[s] = 0 ; 
        if (low != high){
            lazy[2*s] = lazy[2*s] ? 0 : 1 ; 
            lazy[2*s+1] = lazy[2*s+1] ? 0 : 1 ; 
        }
    }
    if (left > high || right < low){
        return 0 ; 
    }
    
    if (left <= low && right >= high){
        return stree[s] ; 
    }
    int mid = (low+high)/2 ; 
    int q1 = query(low,mid,left,right,2*s) ; 
    int q2 = query(mid+1,high,left,right,2*s+1) ; 
    return (q1+q2) ; 
}

int main(){
    int n , m ; sci(n) ; sci(m) ; 
    memset(a,0,sizeof(a)) ; 
    memset(stree,0,sizeof(stree)) ; 
    memset(lazy,0,sizeof(lazy)) ; 
    build(1,n,1) ; 
    int w , x , y ; 
    while (m--){
        scanf("%d%d%d",&w,&x,&y) ; 
        if (w){
            int ans = query(1,n,x,y,1) ; 
            printf("%d\n",ans) ; 
        }
        else{
            update(1,n,x,y,1) ; 
        }
    }
    return  0 ; 
    
}

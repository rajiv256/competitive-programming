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
#define MP(x,y) make_pair(x,y)
#define MXN 100005
using namespace std;
 
//----------- Fast Input ----------------
 
#define BUFSIZE (10000)
char inputbuffer[BUFSIZE];
char *ioptr=inputbuffer+BUFSIZE,*ioend=inputbuffer+BUFSIZE;
int input_eof=0;
 
#define getchar() ({if (ioptr >= ioend) init_input(); *ioptr++;})
#define eof() (ioptr>=ioend && input_eof)
#define eoln() ({if(ioptr >= ioend) init_input(); *ioptr == '\n';})
 
void init_input(){
	if (input_eof) return;
	int existing = BUFSIZE - (ioend - inputbuffer);
	memcpy(inputbuffer, ioend, existing);
	int wanted = ioend - inputbuffer;
	int count=fread(inputbuffer + existing, 1, wanted, stdin);
	if (count < wanted)
		input_eof = 1;
	ioend = inputbuffer + BUFSIZE - (wanted - count);
	while (*--ioend > ' ');
	ioend++;
	ioptr=inputbuffer;
}
 
inline void non_whitespace(){
	for(;;){
		if(ioptr>=ioend)
			init_input();
		if(*ioptr>' ')
			return;
		ioptr++;
	}
}
 
inline int getint(){
	non_whitespace();
	int neg=0;
	if(*ioptr=='-'){
		ioptr++;
		neg=1;
	}
	int n=0;
	while(*ioptr>' ')
		n=(n<<3)+(n<<1)+*ioptr++-'0';
	ioptr++;
	if(neg)
		n=-n;
	return n;
}
 
 
// ----------------------------------------
 
set<int> came[MXN];
int BIT[MXN];
int QQ[MXN][2];
vector< pair<int,int> > I;
int A[MXN];
vector< pair<int,int> > V;
int ans[MXN];
 
int query(int ind){
	             int ret = 0;
                 while(ind>0){
                      ret+=BIT[ind];
                      ind-=(ind & -ind);
	             }   
                return ret;
}
 
void update(int ind , int val){
				
	            while(ind<MXN){
                  BIT[ind]+=val;
                  ind+=(ind & -ind);
	            }   
}
 
 
 
int main(){
 
	int N,Q,a,b,K;
	
	N = getint();
	K = getint();
 	  
	for(int i=1;i<=N;i++){
		a = getint();
		I.push_back(MP(a,i));
	}
 
	sort(I.begin(),I.end());
 
	A[I[0].second] = 1;
	for(int i=1;i<N;i++)
	{
		if(I[i].first==I[i-1].first) A[I[i].second] = A[I[i-1].second];
		else A[I[i].second] = A[I[i-1].second]+1;
	}
 
	for(int i=1;i<=N;i++){
		a = A[i];
		V.push_back(make_pair(i,-1*a));
	}
 
	Q = getint();
 
	for(int i=1;i<=Q;i++){
		a = getint(), b = getint();
		a++;
		b++;
		QQ[i][0] = a , QQ[i][1] = b;
		V.push_back(make_pair(b,i));
	}
 
	sort(V.begin(),V.end());
 
	for(int i=0;i<N+Q;i++){
		a = V[i].first , b = V[i].second;
 
		if(b<0){
			b = -b;
			if(came[b].size()>=K+1)
			{
				update(*(came[b].begin()),-1);
				came[b].erase(came[b].begin());
			}
			came[b].insert(a);
 
			if(came[b].size()==K+1)
			{
				update(*(came[b].begin()),1);
			}
			
		}
		else{
			ans[b] = query(a) - query(QQ[b][0]-1);
		}
	}
 
	for(int i=1;i<=Q;i++){
		printf("%d\n",ans[i]);
	}
 
 
 
	return 0;
 
}
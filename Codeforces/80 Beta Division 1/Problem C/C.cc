#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <utility>
#include <queue>
#include <stack>
#include <cassert>

#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)

#define fi first
#define se second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define LET(x, a)  __typeof(a) x(a)
#define foreach(it, v) for(LET(it, v.begin()); it != v.end(); it++)

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cerr.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define meta __FUNCTION__<<" "<<__LINE__<<" "
#define tr(x) cerr<<meta<<#x<<" "<<x<<endl;
#define tr2(x,y) cerr<<meta<<#x<<" "<<x<<" "<<#y<<" "<<y<<endl;
#define tr3(x,y,z) cerr<<meta<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
#define tr4(w,x,y,z) cerr<<meta<<#w<<" "<<w<<" "<<#x<<" " <<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
#define tr5(v,w,x,y,z) cerr<<meta<<#v<<" "<<v<<" "<<#w<<" "<<w<<" "<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
#define tr6(u,v,w,x,y,z) cerr<<meta<<#u<<" "<<u<<" "<<#v<<" "<<v<<" "<<#w<<" "<<w<<" "<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;

using namespace std;

typedef long long ll;

ll n, k, p, x;

int main(){ _
	cin >> n >> k >> p;
	while(p--){
		cin >> x;
		if(k == 0){
			cout << '.'; continue;
		}
		
		if(n%2 == 0){
			if(k <= n/2){
				if(x%2 == 1 or (n-x)/2 >= k){
					cout << '.';
				}
				else{
					cout << 'X';
				}
			}
			else{
				if(x%2 == 1 and x <= 2*(n-k)-1){
					cout << '.';
				}
				else{
					cout << 'X';
				}
			}
		}
		else{
			if(x == n){
				cout << 'X';
			}
			else if(k-1 <= n/2){
				if(x%2 == 1 or (n-1-x)/2 >= k-1){
					cout << '.';
				}
				else{
					cout << 'X';
				}
			}
			else{
				if(x%2 == 1 and x <= 2*(n-k)-1){
					cout << '.';
				}
				else{
					cout << 'X';
				}
			}
		}
	}
	cout << '\n';
	return 0;
}

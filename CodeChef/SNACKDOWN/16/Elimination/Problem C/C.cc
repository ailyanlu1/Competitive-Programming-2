#include <bits/stdc++.h>

#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define foreach(it, v) for(__typeof((v).begin()) it=(v).begin(); it != (v).end(); ++it)
#define meta __FUNCTION__,__LINE__

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

using namespace std;

const long double PI = 3.1415926535897932384626433832795;

template<typename S, typename T> 
ostream& operator<<(ostream& out,pair<S,T> const& p){out<<'('<<p.fi<<", "<<p.se<<')';return out;}

template<typename T>
ostream& operator<<(ostream& out,vector<T> const& v){
int l=v.size();for(int i=0;i<l-1;i++)out<<v[i]<<' ';if(l>0)out<<v[l-1];return out;}

void tr(){cout << endl;}
template<typename S, typename ... Strings>
void tr(S x, const Strings&... rest){cout<<x<<' ';tr(rest...);}

typedef long long ll;
typedef pair<int,int> pii;

const ll MOD = 1e9 + 7;
const int N = 61;

ll f[N];
ll C[N][N];

void solve(){
	int n, k;
	sd2(n,k);

	for(int i = 1; i < n; i++){
		int x, y; sd2(x,y);
	}
	
	if(k == 1){
		printf("1\n");
		return;
	}
	
	ll ans = 0;
	
	for(int i = 0; i < k; i++){
		ans += ((C[n-1][i] * C[k][i+1] % MOD) * f[i+1]) % MOD;
		if(ans >= MOD) ans -= MOD;
	}
	printf("%lld\n", ans);
	
}

int main(){
	f[0] = 1;
	for(int i = 1; i < N; i++){
		f[i] = (f[i-1] * i) % MOD;
	}
	
	C[0][0] = 1;
	for(int i = 1; i < N; i++){
		C[i][0] = C[i][i] = 1;
		for(int j = 1; j < i; j++){
			C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD;
		}
	}


	int t;
	sd(t);
	while(t--) solve();
	
	return 0;
}
